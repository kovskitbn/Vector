#include <iostream>
#include <string>

class Vector {
    public:
    double x,y,z;
    Vector(double=0.0 , double=0.0, double=0.0);
    bool isColinear(Vector &Vect);
    double norm();
    double multiply(const double real_number);
    Vector operator+(const Vector &);
    void print();
    Vector operator^(const Vector &);
    double operator*(const Vector &);
    bool isOrthogonal(Vector &Vect);
    void operator*=(const double &);

};
bool operator==(Vector const& a, Vector const& b);
