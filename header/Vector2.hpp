#pragma once

namespace math {
class Vector2 {
 private:
 public:
  float x_ = 0;
  float y_ = 0;

  Vector2();
  Vector2(float x, float y);

  auto operator+(const Vector2 &vector) const -> Vector2;
  auto operator-(const Vector2 &vector) const -> Vector2;
  auto operator*(float scalar) const -> Vector2;
  auto operator/(float scalar) const -> Vector2;
  auto operator*=(float scalar) -> Vector2 &;
  auto operator/=(float scalar) -> Vector2 &;

  [[nodiscard]] auto Length() const -> float;
  [[nodiscard]] auto LengthSquared() const -> float;
  [[nodiscard]] auto Dot(const Vector2 &vector) const -> float;

  void Normalize();
};
}  // namespace math