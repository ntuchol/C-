class Quaternion {
public:
    double w, x, y, z;

    Quaternion();
    Quaternion(double w, double x, double y, double z);

    Quaternion conjugate() const;
    Quaternion inverse() const; 
    double norm() const;
    void normalize();
    Quaternion operator*(const Quaternion& other) const;

    Vector3 rotate(const Vector3& v) const; 
};
