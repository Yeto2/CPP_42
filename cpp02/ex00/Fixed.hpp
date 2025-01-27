#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>


class Fixed
{
private:
    int _fixed;
    static const int fract_bits;
public:
    Fixed();
    Fixed(const Fixed& obj);
    Fixed &operator=(const Fixed& obj);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();
};



#endif