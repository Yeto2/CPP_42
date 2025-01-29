#include "Fixed.hpp"

const int Fixed::fract_bits = 8;

Fixed::Fixed():_fixed(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_fixed = obj._fixed;
}

Fixed &Fixed::operator=(const Fixed& obj)
{
    if (this == &obj)
        return (*this);
    std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(obj.getRawBits());
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixed;
}

void Fixed::setRawBits( int const raw )
{
    _fixed = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
};

