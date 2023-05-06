#include "Matrix4x4.hpp"

#include <cmath>
using namespace math;

math::Matrix4x4::Matrix4x4() {
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 5; ++j) {
      element[i][j] = 0.f;
    }
  }
}

math::Matrix4x4::~Matrix4x4() {}

Matrix4x4 math::Matrix4x4::operator*(const Matrix4x4& matrix) {
  Matrix4x4 result;

  result.element[0][0] = element[0][0] * matrix.element[0][0] +
                         element[0][1] * matrix.element[1][0] +
                         element[0][2] * matrix.element[2][0] +
                         element[0][3] * matrix.element[3][0];

  result.element[1][0] = element[1][0] * matrix.element[0][0] +
                         element[1][1] * matrix.element[1][0] +
                         element[1][2] * matrix.element[2][0] +
                         element[1][3] * matrix.element[3][0];

  result.element[2][0] = element[2][0] * matrix.element[0][0] +
                         element[2][1] * matrix.element[1][0] +
                         element[2][2] * matrix.element[2][0] +
                         element[2][3] * matrix.element[3][0];

  result.element[3][0] = element[3][0] * matrix.element[0][0] +
                         element[3][1] * matrix.element[1][0] +
                         element[3][2] * matrix.element[2][0] +
                         element[3][3] * matrix.element[3][0];

  result.element[0][1] = element[0][0] * matrix.element[0][1] +
                         element[0][1] * matrix.element[1][1] +
                         element[0][2] * matrix.element[2][1] +
                         element[0][3] * matrix.element[3][1];

  result.element[1][1] = element[1][0] * matrix.element[0][1] +
                         element[1][1] * matrix.element[1][1] +
                         element[1][2] * matrix.element[2][1] +
                         element[1][3] * matrix.element[3][1];

  result.element[2][1] = element[2][0] * matrix.element[0][1] +
                         element[2][1] * matrix.element[1][1] +
                         element[2][2] * matrix.element[2][1] +
                         element[2][3] * matrix.element[3][0];

  result.element[3][1] = element[3][0] * matrix.element[0][1] +
                         element[3][1] * matrix.element[1][1] +
                         element[3][2] * matrix.element[2][1] +
                         element[3][3] * matrix.element[3][1];

  result.element[0][2] = element[0][0] * matrix.element[0][2] +
                         element[0][1] * matrix.element[1][2] +
                         element[0][2] * matrix.element[2][2] +
                         element[0][3] * matrix.element[3][2];

  result.element[1][2] = element[1][0] * matrix.element[0][2] +
                         element[1][1] * matrix.element[1][2] +
                         element[1][2] * matrix.element[2][2] +
                         element[1][3] * matrix.element[3][2];

  result.element[2][2] = element[2][0] * matrix.element[0][2] +
                         element[2][1] * matrix.element[1][2] +
                         element[2][2] * matrix.element[2][2] +
                         element[2][3] * matrix.element[3][2];

  result.element[3][2] = element[3][0] * matrix.element[0][2] +
                         element[3][1] * matrix.element[1][2] +
                         element[3][2] * matrix.element[2][2] +
                         element[3][3] * matrix.element[3][2];

  result.element[0][3] = element[0][0] * matrix.element[0][3] +
                         element[0][1] * matrix.element[1][3] +
                         element[0][2] * matrix.element[2][3] +
                         element[0][3] * matrix.element[3][3];

  result.element[1][3] = element[1][0] * matrix.element[0][3] +
                         element[1][1] * matrix.element[1][3] +
                         element[1][2] * matrix.element[2][3] +
                         element[1][3] * matrix.element[3][3];

  result.element[2][3] = element[2][0] * matrix.element[0][3] +
                         element[2][1] * matrix.element[1][3] +
                         element[2][2] * matrix.element[2][3] +
                         element[2][3] * matrix.element[3][3];

  result.element[3][3] = element[3][0] * matrix.element[0][3] +
                         element[3][1] * matrix.element[1][3] +
                         element[3][2] * matrix.element[2][3] +
                         element[3][3] * matrix.element[3][3];
  return result;
}

Matrix4x4 math::Matrix4x4::Transpose() {
  Matrix4x4 result;

  result.element[0][1] = element[1][0];
  result.element[0][2] = element[2][0];
  result.element[0][3] = element[3][0];

  result.element[1][0] = element[0][1];
  result.element[1][2] = element[2][1];
  result.element[1][3] = element[3][1];

  result.element[2][0] = element[0][2];
  result.element[2][1] = element[1][2];
  result.element[2][3] = element[3][2];

  result.element[3][0] = element[0][3];
  result.element[3][1] = element[1][3];
  result.element[3][2] = element[2][3];

  return result;
}

Matrix4x4 math::Matrix4x4::CreateIdentityMatrix() {
  Matrix4x4 result;
  result.element[0][0] = 1;
  result.element[1][1] = 1;
  result.element[2][2] = 1;
  result.element[3][3] = 1;
  return result;
}

Matrix4x4 math::Matrix4x4::CreateRotationYawMatrix(float yaw) {
  Matrix4x4 result = CreateIdentityMatrix();
  result.element[0][0] = std::cos(yaw);
  result.element[0][2] = -std::sin(yaw);
  result.element[2][0] = std::sin(yaw);
  result.element[2][2] = std::cos(yaw);
  return result;
}

Matrix4x4 math::Matrix4x4::CreateRotationPitchMatrix(float pitch) {
  return Matrix4x4();
}

Matrix4x4 math::Matrix4x4::CreateRotationRollMatrix(float roll) {
  Matrix4x4 result = CreateIdentityMatrix();
  result.element[0][0] = std::cos(roll);
  result.element[0][1] = std::sin(roll);
  result.element[1][0] = -std::sin(roll);
  result.element[1][1] = std::cos(roll);
  return result;
}

Matrix4x4 math::Matrix4x4::CreateRotationYawPitchRollMatrix(
    const Vector3& rotation) {
  return Matrix4x4();
}

Matrix4x4 math::Matrix4x4::CreateScaleMatrix(const Vector3& scale) {
  Matrix4x4 result = CreateIdentityMatrix();
  result.element[0][0] = scale.x_;
  result.element[1][1] = scale.x_;
  result.element[2][2] = scale.x_;
  return result;
}

Matrix4x4 math::Matrix4x4::CreateTranslationMatrix(const Vector3& translation) {
  Matrix4x4 result = CreateIdentityMatrix();
  result.element[3][0] = translation.x_;
  result.element[3][1] = translation.x_;
  result.element[3][2] = translation.x_;
  return result;
}
