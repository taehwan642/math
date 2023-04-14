#include "Vector3.hpp"
#include <cmath>

using namespace Math;

Vector3::Vector3()
{
	this->x = 0.0F;
	this->y = 0.0F;
	this->z = 0.0F;
}

Vector3::Vector3(float _x, float _y, float _z)
{
	this->x = _x;
	this->y = _y;
	this->z = _z;
}

auto Vector3::operator+(const Vector3& _vector) const -> Vector3
{
	return Vector3(this->x + _vector.x, this->y + _vector.y, this->z + _vector.z);
}

auto Vector3::operator-(const Vector3& _vector) const -> Vector3
{
	return Vector3(this->x - _vector.x, this->y - _vector.y, this->z - _vector.z);
}

auto Vector3::operator*(const float _scalar) const -> Vector3
{
	return Vector3(this->x * _scalar, this->y * _scalar, this->z * _scalar);
}

auto Vector3::operator/(const float _scalar) const -> Vector3
{
	return Vector3(this->x / _scalar, this->y / _scalar, this->z / _scalar);
}

auto Vector3::operator*=(const float _scalar) -> Vector3&
{
	this->x *= _scalar;
	this->y *= _scalar;
	this->z *= _scalar;
	return *this;
}

auto Vector3::operator/=(const float _scalar) -> Vector3&
{
	this->x /= _scalar;
	this->y /= _scalar;
	this->z /= _scalar;
	return *this;
}

float Math::Vector3::Length()
{
    return sqrt(x * x + y * y + z * z);
}

float Vector3::LengthSquared()
{
	return this->x * this->x + this->y * this->y + this->z * this->z;
}

float Vector3::Dot(const Vector3& _vector)
{
	return (this->x * _vector.x) + (this->y * _vector.y) + (this->z + _vector.z);
}

void Vector3::Normalize()
{
	*this /= LengthSquared();
}

Vector3 Vector3::Cross(const Vector3& _vector)
{
	float x = (this->y * _vector.z) - (this->z * _vector.y);
	float y = (this->z * _vector.x) - (this->x * _vector.z);
	float z = (this->x * _vector.y) - (this->y * _vector.x);
	return Vector3(x, y, z);
}