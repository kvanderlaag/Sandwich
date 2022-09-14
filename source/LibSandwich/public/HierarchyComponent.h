#pragma once

#include <ComponentManager.h>
#include <Entity.h>
#include <Matrix.h>
#include <TransformComponent.h>

namespace sandwich
{
	class HierarchyComponent
	{
	public:
		static ComponentManager<HierarchyComponent> s_hierarchy;
		
	public:
		const EntityID& Parent() const;
		EntityID& Parent();

		const Math::Matrix3x3f& WorldParentInverse() const;
		Math::Matrix3x3f& WorldParentInverse();

	private:
		EntityID m_parent = Entity::k_invalid;
		Math::Matrix3x3f m_worldParentInverse;
	};

	

	void Attach(EntityID entity, EntityID parent)
	{
		HierarchyComponent::s_hierarchy.Create(entity).Parent() = parent;

		if (HierarchyComponent::s_hierarchy.size() > 1)
		{
			for (size_t i = HierarchyComponent::s_hierarchy.size() - 1; i > 0; --i)
			{
				EntityID parentCandidate = HierarchyComponent::s_hierarchy.GetEntity(i);
				const HierarchyComponent& parent_candidate = HierarchyComponent::s_hierarchy[i];
				for (size_t j = 0; j < i; ++j)
				{
					const HierarchyComponent& childCandidate = HierarchyComponent::s_hierarchy[j];

					if (childCandidate.Parent() == parentCandidate)
					{
						HierarchyComponent::s_hierarchy.MoveItem(i, j);
						++i;
						break;
					}
				}
			}
		}

		HierarchyComponent& parentComponent = *HierarchyComponent::s_hierarchy.GetComponent(entity);

		TransformComponent* transformParent = TransformComponent::s_transforms.GetComponent(parent);
		if (transformParent == nullptr)
		{
			transformParent = &TransformComponent::s_transforms.Create(parent);
		}
		// Save the parent's inverse worldmatrix:
		parentComponent.WorldParentInverse() = transformParent->GetWorldMatrix().InverseClone();
		
	}
}