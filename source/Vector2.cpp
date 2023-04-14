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

auto Vector2::operator+(const Vector2& _vector) const -> Vector2
{
	return Vector2(this->x + _vector.x, this->y + _vector.y);
}

auto Vector2::operator-(const Vector2& _vector) const -> Vector2
{
	return Vector2(this->x - _vector.x, this->y - _vector.y);
}

auto Vector2::operator*(float _scalar) const -> Vector2
{
	return Vector2(this->x * _scalar, this->y * _scalar);
}

auto Vector2::operator/(float _scalar) const -> Vector2
{
	return Vector2(this->x / _scalar, this->y / _scalar);
}

auto Vector2::operator*=(float _scalar) -> Vector2&
{
	this->x *= _scalar;
	this->y *= _scalar;

	return *this;
}

auto Vector2::operator/=(float _scalar) -> Vector2&
{
	this->x /= _scalar;
	this->y /= _scalar;

	return *this;
}

auto Math::Vector2::Length() const -> float
{
    return sqrtf(x * x + y * y);
}

auto Vector2::LengthSquared() const -> float
{
	return this->x * this->x + this->y * this->y;
}

auto Vector2::Dot(const Vector2& _vector) const -> float
{
	return (this->x * _vector.x) + (this->y * _vector.y);
}

void Vector2::Normalize()
{
	*this /= LengthSquared();
}

