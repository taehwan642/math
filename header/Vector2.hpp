#pragma once

namespace Math
{
	class Vector2
	{
	private:
	public:
		float x = 0;
		float y = 0;

		Vector2();
		Vector2(float x, float y);

		auto operator +(const Vector2& _vector) const -> Vector2;
		auto operator -(const Vector2& _vector) const -> Vector2;
		auto operator *(const float _scalar) const -> Vector2;
		auto operator /(const float _scalar) const -> Vector2;
        auto operator *=(const float _scalar) -> Vector2&;
        auto operator /=(const float _scalar) -> Vector2&;

		auto Length() const -> float;
		auto LengthSquared() const -> float;
		auto Dot(const Vector2& vector) const -> float;
		void Normalize();
	};
}