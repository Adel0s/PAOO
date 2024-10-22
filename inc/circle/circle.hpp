#ifndef HELLO_HPP
#define HELLO_HPP

namespace circle {

class Circle 
{
private:
    double radius;

public:
    Circle(double rad);
    ~Circle();
    
public:
    double GetRadius();
};

} // namespace circle

#endif // HELLO_HPP
