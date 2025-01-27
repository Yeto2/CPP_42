#include "Point.hpp"

Point::Point(): x(0),y(0) {}

Point::Point(Fixed const x_f, Fixed const y_f): x(x_f),y(y_f) {}

Point::Point(const Point& obj)
{
    *this = obj;
}

Point &Point::operator=(const Point& obj)
{
    (void)obj;
    return (*this);
}

Fixed const &Point::get_x(void) const
{
    return (x);
}
Fixed const &Point::get_y(void) const
{
    return (y);
}

Point::~Point(){}