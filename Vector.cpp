#include "Vector.h"

Math::Vector3::Vector3(float x, float y, float z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

float Math::Vector3::Dot(Vector3& v1, Vector3& v2)
{
    return (v1.x * v1.x + v1.y * v1.y + v1.z * v1.z);
}

Math::Vector3 Math::Vector3::Cross(Vector3& v1, Vector3& v2)
{
    return Vector3(v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z, v1.x * v2.y - v1.y * v2.x);
}

