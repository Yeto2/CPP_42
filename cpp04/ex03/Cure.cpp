#include "Cure.hpp"
#include "ICharacter.hpp"

        
Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &obj) : AMateria(obj)
{
    *this = obj;
}

Cure &Cure::operator=(const Cure &obj)
{
    (void) obj;
    return (*this);
}

Cure *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure()
{
}