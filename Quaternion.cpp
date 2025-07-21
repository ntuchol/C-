class Quaternion {
public:
    double w, x, y, z;

    // Constructors
    Quaternion();
    Quaternion(double w, double x, double y, double z);
    // ... other constructors (e.g., from axis-angle, Euler angles)

    // Operations
    Quaternion conjugate() const;
    Quaternion inverse() const; // For unit quaternions, same as conjugate
    double norm() const;
    void normalize();
    Quaternion operator*(const Quaternion& other) const; // Quaternion multiplication
    // ... other operators (e.g., addition, subtraction)

    // Rotation
    // Rotate a 3D vector
    // Vector3 rotate(const Vector3& v) const; 
};