#pragma once

namespace Math
{
    class Vector3
    {
    private:

    public:
        float x;
        float y;
        float z;

        Vector3(float x, float y, float z);
        
        static float Dot(const Vector3& v1, const Vector3& v2);
        static Vector3 Cross(const Vector3& v1, const Vector3& v2);
        static float Length(const Vector3& v);
        static float LengthSq(const Vector3& v);
        static Vector3 Normalize(const Vector3& v);

        Vector3* operator+(const Vector3& ref)
        {
            return new Vector3(this->x + ref.x, this->y + ref.y, this->z + ref.z);
        }

        Vector3* operator-(const Vector3& ref)
        {
            return new Vector3(this->x - ref.x, this->y - ref.y, this->z - ref.z);
        }

        Vector3* operator*(const Vector3& ref)
        {
            return new Vector3(this->x * ref.x, this->y * ref.y, this->z * ref.z);
        }

        Vector3* operator/(const Vector3& ref)
        {
            return new Vector3(this->x / ref.x, this->y / ref.y, this->z / ref.z);
        }

    };
}