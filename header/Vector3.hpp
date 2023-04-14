#pragma once

namespace Math
{
	class Vector3
	{
	public:
		float x = 0.0F;
		float y = 0.0F;
		float z = 0.0F;

		Vector3();
		Vector3(float _x, float _y, float _z);

		// Operator
		auto operator +(const Vector3& _vector) const -> Vector3;
		auto operator -(const Vector3& _vector) const -> Vector3;
		auto operator *(float _scalar) const -> Vector3;
		auto operator /(float _scalar) const -> Vector3;
		auto operator *=(float _scalar) -> Vector3&;
		auto operator /=(float _scalar) -> Vector3&;

		auto LengthSquared() const -> float;
		auto Length() const -> float;
		auto Dot(const Vector3& _vector) const -> float;
		void Normalize();
		auto Cross(const Vector3& _vector) const -> Vector3;
	};
}
