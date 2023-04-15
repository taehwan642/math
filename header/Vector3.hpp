#pragma once

namespace math
{
	class Vector3
	{
	public:
		float x_ = 0.0F;
		float y_ = 0.0F;
		float z_ = 0.0F;

		Vector3();
		Vector3(float x, float y, float z);

		// Operator
		auto operator+(const Vector3 &vector) const -> Vector3;
		auto operator-(const Vector3 &vector) const -> Vector3;
		auto operator*(float scalar) const -> Vector3;
		auto operator/(float scalar) const -> Vector3;
		auto operator*=(float scalar) -> Vector3 &;
		auto operator/=(float scalar) -> Vector3 &;

		[[nodiscard]] auto LengthSquared() const -> float;
		[[nodiscard]] auto Length() const -> float;
		[[nodiscard]] auto Dot(const Vector3 &vector) const -> float;

		void Normalize();
		[[nodiscard]] auto Cross(const Vector3 &vector) const -> Vector3;
	};
}
