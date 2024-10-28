#include <iostream>
#include <cmath>
#include <circle/circle.hpp>

using std::cout;
using std::cin;

namespace circle {

Circle::Circle(double RADIUS)
:radius(new double{RADIUS})
{
    cout << "Circle constructor succesfully created an object of Circle class!\n";
}

Circle::~Circle()
{
    cout << "Circle destructor called, object of Circle class is being destroyed! Radius = " << *radius <<"\n";
    delete radius;
}

double Circle::GetRadius()
{
    return *radius;
}

double Circle::GetDiameter()
{
    return 2 * *(radius);
}

Circle::Circle(const Circle& other)
{
    radius = new double {*(other.radius)};
    cout << "Circle copy constructor called, object of Circle class is being copied! Radius = " << *radius << "\n";
}

Circle::Circle(Circle&& c)
{
    radius = c.radius;
    c.radius = nullptr;
    cout << "Circle move constructor called, object of Circle class is being moved! Radius = " << *radius << "\n";
}

void Circle::Display() const
{
    if(radius)
    {
        cout << "Circle radius: " << *radius << "\n";
    }
    else
    {
        cout << "Circle radius: nullptr\n";
    }
}

}

