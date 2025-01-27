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
    Fixed(const int number);
    Fixed(const float number);
    Fixed &operator=(const Fixed& obj);
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);

    // overload operators
    bool operator > (const Fixed &obj) const;
    bool operator < (const Fixed &obj) const;
    bool operator >= (const Fixed &obj) const;
    bool operator <= (const Fixed &obj) const;
    bool operator == (const Fixed &obj) const;
    bool operator != (const Fixed &obj) const;

    Fixed operator + (const Fixed &obj);
    Fixed operator - (const Fixed &obj);
    Fixed operator * (const Fixed &obj);
    Fixed operator / (const Fixed &obj);

    Fixed operator ++ (int);
    Fixed operator ++ (void);
    Fixed operator -- (int);
    Fixed operator -- (void);

    ~Fixed();
};


std::ostream &operator<<(std::ostream &os, Fixed const &obj);

#endif