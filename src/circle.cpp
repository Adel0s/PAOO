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
};

double Circle::GetRadius()
{
    return radius;
}

}

