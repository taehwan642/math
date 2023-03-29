#include "Vector2.h"
#include <cmath>

Math::Vector2::Vector2(float x, float y)
{
	this->x = x;
	this->y = y;
}

Math::Vector2 Math::Vector2::operator+(const Vector2& _vector)
{
	return Vector2(this->x + _vector.x, this->y + _vector.y);
}

Math::Vector2 Math::Vector2::operator-(const Vector2& _vector)
{
	return Vector2(this->x - _vector.x, this->y - _vector.y);
}

Math::Vector2 Math::Vector2::operator*(const float _scalar)
{
	return Vector2(this->x * _scalar, this->y * _scalar);
}

Math::Vector2 Math::Vector2::operator/(const float _scalar)
{
	return Vector2(this->x / _scalar, this->y / _scalar);
}

Math::Vector2& Math::Vector2::operator*=(const float _scalar)
{
	this->x *= _scalar;
	this->y *= _scalar;

	return *this;
}

Math::Vector2& Math::Vector2::operator/=(const float _scalar)
{
	this->x /= _scalar;
	this->y /= _scalar;

	return *this;
}

float Math::Vector2::Dot(const Vector2& v1, const Vector2& v2)
{
	return v1.x * v2.x + v1.y * v2.y;
}

float Math::Vector2::Length(const Vector2& v)
{
	return sqrt(v.x * v.x + v.y * v.y);
}

float Math::Vector2::LengthSq(const Vector2& v)
{
	return v.x * v.x + v.y * v.y;
}

Math::Vector2 Math::Vector2::Normalize(const Vector2& v)
{
	float len = Length(v);
	return Vector2(v.x / len, v.y / len);
}

