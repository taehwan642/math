#include "Vector.h"
#include <cmath>

Math::Vector3::Vector3(float x, float y, float z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

float Math::Vector3::Dot(const Vector3& v1, const Vector3& v2)
{
    return (v1.x * v1.x + v1.y * v1.y + v1.z * v1.z);
}

Math::Vector3 Math::Vector3::Cross(const Vector3& v1, const Vector3& v2)
{
    return Vector3(v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z, v1.x * v2.y - v1.y * v2.x);
}

float Math::Vector3::Length(const Vector3& v)
{
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

float Math::Vector3::LengthSq(const Vector3& v)
{
    return v.x * v.x + v.y * v.y + v.z * v.z;
}

Math::Vector3 Math::Vector3::Normalize(const Vector3& v)
{
    float len = Length(v);
    return Vector3(v.x / len, v.y / len, v.z / len);
}
