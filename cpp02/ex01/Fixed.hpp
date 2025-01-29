#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>


class Fixed
{
private:
    int _fixed;
    static const int fract_bits;
public:
    Fixed();
    Fixed(const Fixed& obj);
    Fixed(const int number);
    Fixed(const float number);
    Fixed &operator=(const Fixed& obj);
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();
};

std::ostream &operator<<(std::ostream &os, Fixed const &obj);

#endif