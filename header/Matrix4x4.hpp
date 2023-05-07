#pragma once

#include "Vector3.hpp"

namespace math {
class Matrix4x4 {
  // row major
  // v * M = v
  // not M * v
 public:
  float element[4][4];

  Matrix4x4();
  ~Matrix4x4();
  Matrix4x4 operator*(const Matrix4x4& matrix);
  Matrix4x4 Transpose();

  static Matrix4x4 CreateIdentityMatrix();
  static Matrix4x4 CreateRotationYawMatrix(float yaw);
  static Matrix4x4 CreateRotationPitchMatrix(float pitch);
  static Matrix4x4 CreateRotationRollMatrix(float roll);
  static Matrix4x4 CreateRotationYawPitchRollMatrix(const Vector3& rotation);
  static Matrix4x4 CreateScaleMatrix(const Vector3& scale);
  static Matrix4x4 CreateTranslationMatrix(const Vector3& translation);

  const char* ToString() const;
};
}  // namespace math
