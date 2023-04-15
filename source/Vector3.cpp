#include "Vector3.hpp"
#include <cmath>

using namespace Math;

Vector3::Vector3()
{
	this->x_ = 0.0F;
	this->y_ = 0.0F;
	this->z_ = 0.0F;
}

Vector3::Vector3(float _x, float _y, float _z)
{
	this->x_ = _x;
	this->y_ = _y;
	this->z_ = _z;
}

auto Vector3::operator+(const Vector3 &_vector) const -> Vector3
{
	return Vector3(this->x_ + _vector.x_, this->y_ + _vector.y_, this->z_ + _vector.z_);
}

auto Vector3::operator-(const Vector3 &_vector) const -> Vector3
{
	return Vector3(this->x_ - _vector.x_, this->y_ - _vector.y_, this->z_ - _vector.z_);
}

auto Vector3::operator*(float _scalar) const -> Vector3
{
	return Vector3(this->x_ * _scalar, this->y_ * _scalar, this->z_ * _scalar);
}

auto Vector3::operator/(float _scalar) const -> Vector3
{
	return Vector3(this->x_ / _scalar, this->y_ / _scalar, this->z_ / _scalar);
}

auto Vector3::operator*=(float _scalar) -> Vector3 &
{
	this->x_ *= _scalar;
	this->y_ *= _scalar;
	this->z_ *= _scalar;
	return *this;
}

auto Vector3::operator/=(float _scalar) -> Vector3 &
{
	this->x_ /= _scalar;
	this->y_ /= _scalar;
	this->z_ /= _scalar;
	return *this;
}

auto Math::Vector3::Length() const -> float
{
	return sqrtf(x_ * x_ + y_ * y_ + z_ * z_);
}

auto Vector3::LengthSquared() const -> float
{
	return this->x_ * this->x_ + this->y_ * this->y_ + this->z_ * this->z_;
}

auto Vector3::Dot(const Vector3 &_vector) const -> float
{
	return (this->x_ * _vector.x_) + (this->y_ * _vector.y_) + (this->z_ + _vector.z_);
}

void Vector3::Normalize()
{
	*this /= LengthSquared();
}

auto Vector3::Cross(const Vector3 &_vector) const -> Vector3
{
	float x = (this->y_ * _vector.z_) - (this->z_ * _vector.y_);
	float y = (this->z_ * _vector.x_) - (this->x_ * _vector.z_);
	float z = (this->x_ * _vector.y_) - (this->y_ * _vector.x_);
	return Vector3(x, y, z);
}