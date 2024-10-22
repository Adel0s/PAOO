#include <iostream>
#include <cmath>
#include <circle/circle.hpp>

using std::cout;
using std::cin;

namespace circle {

Circle::Circle(double RADIUS)
:radius(RADIUS)
{
    cout << "Circle constructor succesfully created an object of Circle class!\n";
}

Circle::~Circle()
{
    cout << "Circle destructor called, object of Circle class is being destroyed! Radius = " << this->radius <<"\n";
}

double Circle::GetRadius()
{
    return radius;
}

}

