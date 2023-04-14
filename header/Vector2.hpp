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

		const Vector2 operator +(const Vector2& _vector);
		const Vector2 operator -(const Vector2& _vector);
		const Vector2 operator *(const float _scalar);
		const Vector2 operator /(const float _scalar);
		Vector2& operator *=(const float _scalar);
		Vector2& operator /=(const float _scalar);

		float LengthSquared();
		float Length();
		float Dot(const Vector2& vector);
		void Normalize();
	};
}