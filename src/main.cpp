#include <iostream>
#include <circle/circle.hpp>
#include <phone/phone.hpp>

using std::cout;
using std::cin;

int main()
{

    // circle::Circle c{2.5};
    // c.Display();
    // cout <<"Diameter: " << c.GetDiameter() << "\n";

    // circle::Circle c1{3};
    // cout << "Circle radius = " << c1.GetRadius() << "\n";

    // circle::Circle c2{c1};
    // cout << "Circle radius = " << c2.GetRadius() << "\n";
    // c1.Display();
    // c2.Display();  
    
    Phone myPhone{"Adel", "Galaxy S21", "Samsung"};
    myPhone.call("Fernando");
    myPhone.call("Razvan");
    myPhone.call("Stefan");
    myPhone.displayCallHistory();
    return 0;
}