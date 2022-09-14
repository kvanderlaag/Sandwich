#include <HierarchyComponent.h>

namespace sandwich
{
	const EntityID& HierarchyComponent::Parent() const
	{
		return m_parent;
	}
	
	EntityID& HierarchyComponent::Parent()
	{
		return m_parent;
	}

	const Math::Matrix3x3f& HierarchyComponent::WorldParentInverse() const
	{
		return m_worldParentInverse;
	}
	
	Math::Matrix3x3f& HierarchyComponent::WorldParentInverse()
	{
		return m_worldParentInverse;
	}
}