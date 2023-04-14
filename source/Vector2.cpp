#include "Vector2.hpp"
#include <cmath>

using namespace Math;

Vector2::Vector2()
{
	x = 0;
	y = 0;
}

Vector2::Vector2(float x, float y)
{
	this->x = x;
	this->y = y;
}

auto Vector2::operator+(const Vector2& _vector) -> Vector2 const
{
	return Vector2(this->x + _vector.x, this->y + _vector.y);
}

auto Vector2::operator-(const Vector2& _vector) -> Vector2 const
{
	return Vector2(this->x - _vector.x, this->y - _vector.y);
}

auto Vector2::operator*(const float _scalar) -> Vector2 const
{
	return Vector2(this->x * _scalar, this->y * _scalar);
}

auto Vector2::operator/(const float _scalar) -> Vector2 const
{
	return Vector2(this->x / _scalar, this->y / _scalar);
}

auto Vector2::operator*=(const float _scalar) -> Vector2&
{
	this->x *= _scalar;
	this->y *= _scalar;

	return *this;
}

auto Vector2::operator/=(const float _scalar) -> Vector2&
{
	this->x /= _scalar;
	this->y /= _scalar;

	return *this;
}

auto Math::Vector2::Length() -> float const
{
    return sqrt(x * x + y * y);
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

