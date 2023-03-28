#include "Vector3.h"

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

float Math::Vector3LengthSquared(const Vector3& _vector)
{
	return _vector.x * _vector.x + _vector.y * _vector.y + _vector.z * _vector.z;
}

float Math::Vector3Dot(const Vector3& _vector1, const Vector3& _vector2)
{
	return (_vector1.x * _vector2.x) + (_vector1.y * _vector2.y) + (_vector1.z + _vector2.z);
}

Vector3& Math::Vector3Normalize(Vector3* _vector)
{
	*_vector /= Vector3LengthSquared(*_vector);
	return *_vector;
}

Vector3 Math::Vector3Cross(const Vector3& _vector1, const Vector3& _vector2)
{
	float x = (_vector1.y * _vector2.z) - (_vector1.z * _vector2.y);
	float y = (_vector1.z * _vector2.x) - (_vector1.x * _vector2.z);
	float z = (_vector1.x * _vector2.y) - (_vector1.y * _vector2.x);
	return Vector3(x, y, z);
}