#pragma once

#include <cinttypes>

namespace sandwich
{

	typedef uint32_t EntityID;

	class Entity
	{
	public:
		static inline EntityID CreateEntity()
		{
			// do better
			return s_nextEntity++;
		}

		static constexpr EntityID k_invalid = 0;

	private:
		static EntityID s_nextEntity;

	};

}