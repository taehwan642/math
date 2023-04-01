#include "Vector2.h"
#include <cmath>

Math::Vector2::Vector2(float x, float y)
{
	this->x = 0.0f;
	this->y = 0.0f;
}

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

float Vector2::LengthSquared()
{
	return this->x * this->x + this->y * this->y;
}

float Vector2::Dot(const Vector2& _vector)
{
	return (this->x * _vector.x) + (this->y * _vector.y);
}

void Vector2::Normalize()
{
	*this /= LengthSquared();
}

