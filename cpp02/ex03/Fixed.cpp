#include "Fixed.hpp"

const int Fixed::fract_bits = 8;

Fixed::Fixed():_fixed(0)
{
}

Fixed::Fixed(const Fixed& obj)
{
    this->_fixed = obj._fixed;
}

Fixed &Fixed::operator=(const Fixed& obj)
{
    setRawBits(obj.getRawBits());
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    return _fixed;
}
void Fixed::setRawBits( int const raw )
{
    _fixed = raw;
}


Fixed::Fixed(const int number)
{
    _fixed = number << fract_bits;
}

Fixed::Fixed(const float number)
{
    _fixed = static_cast<int>(number * (1 << fract_bits));
}

float Fixed::toFloat( void ) const
{
    return (static_cast<float>(_fixed) / (1 << fract_bits ));
}

int Fixed::toInt( void ) const
{
    return (_fixed >> fract_bits);
}


Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

bool Fixed::operator > (const Fixed &obj) const
{
    return(_fixed > obj._fixed);
}
bool Fixed::operator < (const Fixed &obj) const
{
    return(_fixed < obj._fixed);
}
bool Fixed::operator >= (const Fixed &obj) const
{
    return(_fixed >= obj._fixed);
}
bool Fixed::operator <= (const Fixed &obj) const
{
    return(_fixed <= obj._fixed);
}
bool Fixed::operator == (const Fixed &obj) const
{
    return(_fixed == obj._fixed);
}
bool Fixed::operator != (const Fixed &obj) const
{
    return(_fixed != obj._fixed);
}

Fixed Fixed::operator + (const Fixed &obj) const
{
    return (Fixed(toFloat() + obj.toFloat()));
}
Fixed Fixed::operator - (const Fixed &obj) const
{
    return (Fixed(toFloat() - obj.toFloat()));
}
Fixed Fixed::operator * (const Fixed &obj) const
{
    return (Fixed(toFloat() * obj.toFloat()));
}
Fixed Fixed::operator / (const Fixed &obj) const
{
    return (Fixed(toFloat() / obj.toFloat()));
}

Fixed Fixed::operator ++ (int)
{
    Fixed tmp(*this);
    ++(*this);
    return(tmp);
}
Fixed Fixed::operator ++ (void)
{
    _fixed++;
    return(*this);
}
Fixed Fixed::operator -- (int)
{
    Fixed tmp(*this);
    ++(*this);
    return(tmp);
}

Fixed Fixed::operator -- (void)
{
    _fixed--;
    return(*this);
}

Fixed::~Fixed()
{
}

std::ostream &operator<<(std::ostream &os, Fixed const &obj)
{
    os << obj.toFloat();
    return (os);
}