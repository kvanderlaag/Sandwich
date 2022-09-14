#pragma once

#include <ComponentManager.h>
#include <Matrix.h>
#include <Vector.h>
#include <Quaternion.h>

namespace sandwich
{
	class TransformComponent
	{
	public:
		static ComponentManager<TransformComponent> s_transforms;
		
	public:
		TransformComponent() = default;
		virtual ~TransformComponent() = default;

		inline Math::Vector3f& position() { return m_position; }
		inline const Math::Vector3f& position() const { return m_position; }
		inline Math::Quaternionf& orientation() { return m_orientation; }
		inline const Math::Quaternionf& orientation() const { return m_orientation; }
		inline Math::Vector3f& scale() { return m_scale; }
		inline const Math::Vector3f& scale() const { return m_scale; }

		inline const Math::Matrix3x3f GetWorldMatrix() { return m_worldMatrix; }
		
	private:
		Math::Vector3f m_position;
		Math::Quaternionf m_orientation;
		Math::Vector3f m_scale;
		Math::Matrix3x3f m_worldMatrix;
	};
}