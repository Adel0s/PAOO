#ifndef HELLO_HPP
#define HELLO_HPP

namespace circle {

class Circle 
{
private:
    double *radius;

public:
    // Constructor
    Circle(double rad);

    // Destructor
    ~Circle();

    // Copy constructor
    Circle(const Circle &c);

    // Move constructor
    Circle(Circle &&c);

    // Display
    void Display() const;
    
public:
    double GetRadius();
    double GetDiameter();
};

} // namespace circle

#endif // HELLO_HPP
