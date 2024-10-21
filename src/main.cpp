#include <iostream>
#include <circle/circle.hpp>

using std::cout;
using std::cin;

int main()
{

    circle::Circle c{2.5};
    cout << "Circle radius = " << c.GetRadius() << "\n";

    circle::Circle c1{3};
    cout << "Circle radius = " << c1.GetRadius() << "\n";
    return 0;
}