#ifndef POINT_HPP
#define POINT_HPP


#include "Fixed.hpp"


class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(Fixed const x_f, Fixed const y_f);
        Point(const Point& obj);
        Point &operator=(const Point& obj);

        const Fixed &get_x(void) const;
        const Fixed &get_y(void) const;

        ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif