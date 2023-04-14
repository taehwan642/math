#pragma once

namespace Math
{
	class Vector3
	{
	public:
		float x = 0.0f;
		float y = 0.0f;
		float z = 0.0f;

		Vector3();
		Vector3(float _x, float _y, float _z);

		// Operator
		auto operator +(const Vector3& _vector) const -> Vector3;
		auto operator -(const Vector3& _vector) const -> Vector3;
		auto operator *(const float _scalar) const -> Vector3;
		auto operator /(const float _scalar) const -> Vector3;
		auto operator *=(const float _scalar) -> Vector3&;
		auto operator /=(const float _scalar) -> Vector3&;

		float LengthSquared();
		float Length();
		float Dot(const Vector3& _vector);
		void Normalize();
		Vector3 Cross(const Vector3& _vector);
	};
}
