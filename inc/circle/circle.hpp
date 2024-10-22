#ifndef HELLO_HPP
#define HELLO_HPP

namespace circle {

class Circle 
{
private:
    double *radius;

public:
    Circle(double rad);
    ~Circle();
    Circle(const Circle &c);
    
public:
    double GetRadius();
    double GetDiameter();
};

} // namespace circle

#endif // HELLO_HPP
