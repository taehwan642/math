#include "Vector3.h"
#include <cmath>

using namespace Math;

Vector3::Vector3()
{
	this->x = 0.0f;
	this->y = 0.0f;
	this->z = 0.0f;
}

Vector3::Vector3(float _x, float _y, float _z)
{
	this->x = _x;
	this->y = _y;
	this->z = _z;
}

Vector3 Vector3::operator+(const Vector3& _vector)
{
	return Vector3(this->x + _vector.x, this->y + _vector.y, this->z + _vector.z);
}

Vector3 Vector3::operator-(const Vector3& _vector)
{
	return Vector3(this->x - _vector.x, this->y - _vector.y, this->z - _vector.z);
}

Vector3 Vector3::operator*(const float _scalar)
{
	return Vector3(this->x * _scalar, this->y * _scalar, this->z * _scalar);
}

Vector3 Vector3::operator/(const float _scalar)
{
	return Vector3(this->x / _scalar, this->y / _scalar, this->z / _scalar);
}

Vector3& Vector3::operator*=(const float _scalar)
{
	this->x *= _scalar;
	this->y *= _scalar;
	this->z *= _scalar;
	return *this;
}

Vector3& Vector3::operator/=(const float _scalar)
{
	this->x /= _scalar;
	this->y /= _scalar;
	this->z /= _scalar;
	return *this;
}

Vector3 Math::operator*(const float _scalar, const Vector3& _vector)
{
	Vector3 vector = _vector;
	return vector * _scalar;
}

Vector3 Math::operator/(const float _scalar, const Vector3& _vector)
{
	Vector3 vector = _vector;
	return vector / _scalar;
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