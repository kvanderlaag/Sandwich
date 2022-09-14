#pragma once

#include <cassert>
#include <cinttypes>
#include <climits>

#include <vector>
#include <unordered_map>

#include <Entity.h>

namespace sandwich
{
	template <typename Component>
	class ComponentManager
	{
	public:
		// allocate enough space for 128 components. if the vector runs out of space, when
		// we try to create a new one, call reserve() to make space for 128 more.
		static constexpr uint32_t k_componentAllocationBlockSize = 128;

	public:
		static constexpr bool Test()
		{
			ComponentManager<Component> manager;
			EntityID entities[4];
			for (int i = 0; i < 4; ++i)
			{
				entities[i] = i + 1;
				Component& comp = manager.Create(entities[i]);
				if (manager.GetComponent(entities[i]) != &comp)
				{
					return false;
				}
				manager.GetEntity(0);
				if (!manager.Contains(entities[i]))
				{ 
					return false;
				}
				manager.Remove(entities[i]);
			}
			return true;
		}

	public:
		ComponentManager() 
		{
			m_components.reserve(k_componentAllocationBlockSize);
		};

		virtual ~ComponentManager() {};

		Component& Create(const EntityID owner)
		{
			assert(owner != Entity::k_invalid);
			assert(m_lookup.find(owner) == m_lookup.end());

			assert(m_components.size() == m_entities.size());
			assert(m_components.size() == m_lookup.size());

			if (m_components.size() == m_components.capacity())
			{
				m_components.reserve(m_components.size() + k_componentAllocationBlockSize);
			}

			m_lookup[owner] = m_components.size();
			m_components.push_back(Component());
			m_entities.push_back(owner);

			return m_components.back();
		}

		const bool Contains(const EntityID entityID) const
		{
			return m_lookup.find(entityID) != m_lookup.end();
		}

		Component* GetComponent(const EntityID entityID)
		{
			std::unordered_map<EntityID, size_t>::iterator found = m_lookup.find(entityID);
			return found == m_lookup.end() ? nullptr : &m_components[found->second];
		}

		const Component* GetComponent(const EntityID entityID) const
		{
			std::unordered_map<EntityID, size_t>::const_iterator found = m_lookup.find(entityID);
			return found == m_lookup.end() ? nullptr : &m_components[found->second];
		}

		const EntityID GetEntity(const size_t index) const
		{
			assert(index < m_entities.size());
			return m_entities[index];
		}

		void Remove(EntityID entity)
		{
			auto it = m_lookup.find(entity);
			if (it != m_lookup.end())
			{
				const size_t index = it->second;
				if (index < m_components.size() - 1)
				{
					m_components[index] = std::move(m_components.back());
					m_entities[index] = m_entities.back();
					m_lookup[m_entities[index]] = index;
				}
				m_components.pop_back();
				m_entities.pop_back();
				m_lookup.erase(entity);
			}
		}

		size_t size() const
		{
			return m_components.size();
		}

		Component& operator[](size_t index)
		{
			assert(index < m_components.size());
			return m_components[index];
		}

		void MoveItem(size_t indexFrom, size_t indexTo)
		{
			assert(indexFrom < size());
			assert(indexTo < size());
			if (indexFrom == indexTo)
			{
				return;
			}

			// Save the moved component and entity:
			Component component = std::move(m_components[indexFrom]);
			EntityID entity = m_entities[indexFrom];

			// Every other entity-component that's in the way gets moved by one and lut is kept updated:
			const int direction = indexFrom < indexTo ? 1 : -1;
			for (size_t i = indexFrom; i != indexTo; i += direction)
			{
				const size_t next = i + direction;
				m_components[i] = std::move(m_components[next]);
				m_entities[i] = m_entities[next];
				m_lookup[m_entities[i]] = i;
			}

			// Saved entity-component moved to the required position:
			m_components[indexTo] = std::move(component);
			m_entities[indexTo] = entity;
			m_lookup[entity] = indexTo;
		}

	private:
		std::vector<Component> m_components;
		std::vector<EntityID> m_entities;

		std::unordered_map<EntityID, size_t> m_lookup;
	};
}