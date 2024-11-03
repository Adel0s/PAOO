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
    
    Phone phone1{"Adel", "Galaxy S21", "Samsung"};
    Phone phone2{"Fernando", "P30 PRO", "Huwaei"};
    Phone phone3{"Razvan", "14 PRO", "Iphone"};
    std::cout << std::endl;
    phone1.call(phone2);
    phone1.call(phone3);
    phone2.call(phone1);

    std::cout << "\n--- Copy Constructor ---\n";
    Phone phone4 = phone1; // phone3 este o copie a lui phone1
    std::cout << "Istoricul apelurilor pentru phone4 (copie a lui phone1):" << std::endl;
    phone4.displayCallHistory();

    // Modificăm phone1 pentru a arăta că phone3 este o copie independentă
    phone1.call(phone2); // Alice îl sună încă o dată pe Bob
    std::cout << "\n--- După apel suplimentar în phone1 ---\n";
    phone1.displayCallHistory();
    std::cout << "Istoricul apelurilor pentru phone3 (ar trebui să fie neschimbat):" << std::endl;
    phone4.displayCallHistory();

    // Exemplu de move constructor
    std::cout << "\n--- Move Constructor ---\n";
    Phone phone5 = std::move(phone2); // phone4 preia resursele lui phone2
    std::cout << "Istoricul apelurilor pentru phone4 (după mutare din phone2):" << std::endl;
    phone5.displayCallHistory();

    // Verificăm că phone2 a fost lăsat într-o stare validă, dar goală
    std::cout << "Istoricul apelurilor pentru phone2 (ar trebui să fie gol după move):" << std::endl;
    phone2.displayCallHistory();
    return 0;
}