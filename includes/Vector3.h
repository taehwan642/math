namespace Math
{
	class Vector3
	{
	public:
		float x = 0.0f;
		float y = 0.0f;
		float z = 0.0f;

		Vector3();
		Vector3(float _x, float _y, float _z);

		// Operator
		Vector3 operator +(const Vector3& _vector);
		Vector3 operator -(const Vector3& _vector);
		Vector3 operator *(const float _scalar);
		Vector3 operator /(const float _scalar);
		Vector3& operator *=(const float _scalar);
		Vector3& operator /=(const float _scalar);
		friend Vector3 operator *(const float _scalar, const Vector3& _vector);
		friend Vector3 operator /(const float _scalar, const Vector3& _vector);

		float LengthSquared(const Vector3& _vector);
		float Dot(const Vector3& _vector1, const Vector3& _vector2);
		Vector3& Normalize(Vector3* _vector);
		Vector3 Cross(const Vector3& _vector1, const Vector3& _vector2);
	};
}