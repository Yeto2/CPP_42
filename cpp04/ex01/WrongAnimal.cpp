#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Wrongdefault")
{
    std::cout << "WrongAnimal default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type) : type(_type)
{
    std::cout << "WrongAnimal " << this->getType() << " Constructor(type) called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal " << this->getType() << " Copy Constructor called" << std::endl;
    *this = obj;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return (*this);
}

const std::string &WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout <<"This WrongAnimal Dosen't make any sound " << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

