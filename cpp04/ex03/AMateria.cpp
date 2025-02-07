#include "AMateria.hpp"



AMateria::AMateria() : _type("Default")
{

}

AMateria::AMateria(std::string const & type) : _type(type)
{

}

AMateria::AMateria(const AMateria &obj)
{
    *this = obj;
}

AMateria &AMateria::operator=(const AMateria &obj)
{
    if(this != &obj)
    {
        this->_type = obj._type;
    }
    return *this;
}

std::string const &AMateria::getType() const
{
    return this->_type;
}


void AMateria::use(ICharacter& target)
{
    (void) target;
    std::cout << "This virtual function should be replaced " << std::endl;
}

AMateria::~AMateria()
{
}