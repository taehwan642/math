#include "Vector3.hpp"

#include <cmath>

#include "Matrix4x4.hpp"

using namespace math;

Vector3::Vector3() {
  x_ = 0.0F;
  y_ = 0.0F;
  z_ = 0.0F;
}

Vector3::Vector3(float x, float y, float z) {
  x_ = x;
  y_ = y;
  z_ = z;
}

auto Vector3::operator+(const Vector3 &vector) const -> Vector3 {
  return Vector3(x_ + vector.x_, y_ + vector.y_, z_ + vector.z_);
}

auto Vector3::operator-(const Vector3 &vector) const -> Vector3 {
  return Vector3(x_ - vector.x_, y_ - vector.y_, z_ - vector.z_);
}

auto Vector3::operator*(float scalar) const -> Vector3 {
  return Vector3(x_ * scalar, y_ * scalar, z_ * scalar);
}

auto Vector3::operator/(float scalar) const -> Vector3 {
  return Vector3(x_ / scalar, y_ / scalar, z_ / scalar);
}

auto Vector3::operator*=(float scalar) -> Vector3 & {
  x_ *= scalar;
  y_ *= scalar;
  z_ *= scalar;
  return *this;
}

auto Vector3::operator/=(float scalar) -> Vector3 & {
  x_ /= scalar;
  y_ /= scalar;
  z_ /= scalar;
  return *this;
}

Vector3 math::Vector3::operator*(Matrix4x4 *matrix) { return Vector3(); }

auto Vector3::Length() const -> float { return sqrtf(LengthSquared()); }

auto Vector3::LengthSquared() const -> float {
  return x_ * x_ + y_ * y_ + z_ * z_;
}

auto Vector3::Dot(const Vector3 &vector) const -> float {
  return (x_ * vector.x_) + (y_ * vector.y_) + (z_ + vector.z_);
}

void Vector3::Normalize() { *this /= Length(); }

auto Vector3::Cross(const Vector3 &vector) const -> Vector3 {
  float x = (y_ * vector.z_) - (z_ * vector.y_);
  float y = (z_ * vector.x_) - (x_ * vector.z_);
  float z = (x_ * vector.y_) - (y_ * vector.x_);
  return Vector3(x, y, z);
}