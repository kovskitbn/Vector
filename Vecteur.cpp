#include <iostream>
#include "Vecteur.hpp"
#include <string>
#include <math.h>

Vector::Vector(double _x , double _y, double _z){
    x = _x;
    y = _y;
    z = _z;
}


bool Vector::isColinear(Vector &Vect){
    return(x*Vect.z==y*Vect.x && y*Vect.z==z*Vect.y);
}
double Vector::norm(){
    return sqrt(pow(x,2)+pow(y,2)+pow(z,2));
}
bool operator==(Vector const& a, Vector const& b){
    return (a.x==b.x && a.y == b.y && a.z == b.z);
}
Vector Vector::operator+(const Vector &v){
    Vector R(x+v.x, y+v.y, z+v.z);
    return R;
} 
void Vector::print(){
    std::cout << " x : " << x << std::endl;
    std::cout << " y : " << y << std::endl;
    std::cout << " z : " << z << std::endl;
}
Vector Vector::operator^(const Vector &v){
    Vector R((y*v.z)-z*v.y,(z*v.x)-x*v.z,(x*v.y)-y*v.x);
    return R;
}

double Vector::operator*(const Vector &a ){
    return (x*a.x + y*a.y + z*a.z);
}
bool Vector::isOrthogonal(Vector &Vect){
    return(x*Vect.x+y*Vect.y+z*Vect.z==0);
}
void Vector::operator*=(const double &a){
    x = a*x;
    y = a*y;
    z = a*z;
}