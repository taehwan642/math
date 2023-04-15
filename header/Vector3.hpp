#pragma once

namespace Math
{
	class Vector3
	{
	public:
		float x_ = 0.0F;
		float y_ = 0.0F;
		float z_ = 0.0F;

		Vector3();
		Vector3(float _x, float _y, float _z);

		// Operator
		auto operator+(const Vector3 &_vector) const -> Vector3;
		auto operator-(const Vector3 &_vector) const -> Vector3;
		auto operator*(float _scalar) const -> Vector3;
		auto operator/(float _scalar) const -> Vector3;
		auto operator*=(float _scalar) -> Vector3 &;
		auto operator/=(float _scalar) -> Vector3 &;

		[[nodiscard]] auto LengthSquared() const -> float;
		[[nodiscard]] auto Length() const -> float;
		[[nodiscard]] auto Dot(const Vector3 &_vector) const -> float;

		void Normalize();
		[[nodiscard]] auto Cross(const Vector3 &_vector) const -> Vector3;
	};
}
