#pragma once

namespace Math
{
	class Vector2
	{
	private:
	public:
		float x = 0;
		float y = 0;

		Vector2(float x, float y);

		Vector2 operator +(const Vector2& _vector);
		Vector2 operator -(const Vector2& _vector);
		Vector2 operator *(const float _scalar);
		Vector2 operator /(const float _scalar);
		Vector2& operator *=(const float _scalar);
		Vector2& operator /=(const float _scalar);

		static float Dot(const Vector2& v1, const Vector2& v2);
		static float Length(const Vector2& v);
		static float LengthSq(const Vector2& v);
		static Vector2 Normalize(const Vector2& v);
	};
}