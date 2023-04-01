#include "Vector2.h"

using namespace Math;

Vector2::Vector2(float x, float y)
{
	this->x = 0.0f;
	this->y = 0.0f;
}

Vector2::Vector2(float x, float y)
{
	this->x = x;
	this->y = y;
}

Vector2 Vector2::operator+(const Vector2& _vector)
{
	return Vector2(this->x + _vector.x, this->y + _vector.y);
}

Vector2 Vector2::operator-(const Vector2& _vector)
{
	return Vector2(this->x - _vector.x, this->y - _vector.y);
}

Vector2 Vector2::operator*(const float _scalar)
{
	return Vector2(this->x * _scalar, this->y * _scalar);
}

Vector2 Vector2::operator/(const float _scalar)
{
	return Vector2(this->x / _scalar, this->y / _scalar);
}

Vector2& Vector2::operator*=(const float _scalar)
{
	this->x *= _scalar;
	this->y *= _scalar;

	return *this;
}

Vector2& Vector2::operator/=(const float _scalar)
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

