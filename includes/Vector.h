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
        
        static float Dot(Vector3& v1, Vector3& v2);
        static Vector3 Cross(Vector3& v1, Vector3& v2);

        Vector3* operator+(Vector3& ref)
        {
            return new Vector3(this->x + ref.x, this->y + ref.y, this->z + ref.z);
        }

        Vector3* operator-(Vector3& ref)
        {
            return new Vector3(this->x - ref.x, this->y - ref.y, this->z - ref.z);
        }

        Vector3* operator*(Vector3& ref)
        {
            return new Vector3(this->x * ref.x, this->y * ref.y, this->z * ref.z);
        }

        Vector3* operator/(Vector3& ref)
        {
            return new Vector3(this->x / ref.x, this->y / ref.y, this->z / ref.z);
        }

    };
}