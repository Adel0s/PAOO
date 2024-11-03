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
    
    Phone phone1{"Adel", "Galaxy S21", "Samsung", "0sdfs2312"};
    Phone phone2{"Fernando", "P30 PRO", "Huwaei", "CXcwwvs"};
    Phone phone3{"Razvan", "14 PRO", "Iphone", "asd31"};
    std::cout << std::endl;
    phone1.call(phone2);
    phone1.call(phone3);
    phone2.call(phone1);

    std::cout << "\n--- Copy Constructor Exemplu---\n";
    Phone phone4 = phone1; // phone4 este o copie a lui phone1
    std::cout << "Istoricul apelurilor pentru phone1:" << std::endl;
    phone1.displayCallHistory();
    std::cout << "Istoricul apelurilor pentru phone4 (copie a lui phone1):" << std::endl;
    phone4.displayCallHistory();

    // Modific phone1 pentru a arata ca phone4 este o copie independenta si nu se va modifica
    phone1.call(phone2);
    std::cout << "\n--- După apel suplimentar în phone1 ---\n";
    phone1.displayCallHistory();
    std::cout << "Istoricul apelurilor pentru phone4 (ar trebui să fie neschimbat):" << std::endl;
    phone4.displayCallHistory();

    std::cout << "Brand phone2 inainte de move: " << phone2.getBrand() << std::endl;
    // Exemplu de move constructor
    std::cout << "\n--- Move Constructor Exemplu---\n";
    Phone phone5 = std::move(phone2); // phone5 preia resursele lui phone2
    std::cout << "Istoricul apelurilor pentru phone5 (după mutare din phone2):" << std::endl;
    phone5.displayCallHistory();

    // Verificam ca phone2 a fost lasat intr-o stare valida, dar goala
    std::cout << "Istoricul apelurilor pentru phone2 (ar trebui să fie gol după move):" << std::endl;
    std::cout << "Brand phone2 dupa move: " << phone2.getBrand() << std::endl;
    phone2.displayCallHistory();
    return 0;
}