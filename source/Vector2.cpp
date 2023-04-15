#include "Vector2.hpp"

#include <cmath>

using namespace math;

Vector2::Vector2() {
  x_ = 0;
  y_ = 0;
}

Vector2::Vector2(float x, float y) {
  x_ = x;
  y_ = y;
}

auto Vector2::operator+(const Vector2 &vector) const -> Vector2 {
  return Vector2(x_ + vector.x_, y_ + vector.y_);
}

auto Vector2::operator-(const Vector2 &vector) const -> Vector2 {
  return Vector2(x_ - vector.x_, y_ - vector.y_);
}

auto Vector2::operator*(float scalar) const -> Vector2 {
  return Vector2(x_ * scalar, y_ * scalar);
}

auto Vector2::operator/(float scalar) const -> Vector2 {
  return Vector2(x_ / scalar, y_ / scalar);
}

auto Vector2::operator*=(float scalar) -> Vector2 & {
  x_ *= scalar;
  y_ *= scalar;

  return *this;
}

auto Vector2::operator/=(float scalar) -> Vector2 & {
  x_ /= scalar;
  y_ /= scalar;

  return *this;
}

auto Vector2::Length() const -> float { return sqrtf(LengthSquared()); }

auto Vector2::LengthSquared() const -> float { return x_ * x_ + y_ * y_; }

auto Vector2::Dot(const Vector2 &vector) const -> float {
  return (x_ * vector.x_) + (y_ * vector.y_);
}

void Vector2::Normalize() { *this /= Length(); }
