#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat default Constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(std::string _type) : WrongAnimal(_type)
{
    std::cout << "WrongCat Constructor(type) called" << std::endl;
    type = _type;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
    std::cout << "WrongCat Copy Constructor called" << std::endl;
    *this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << this->getType() << " says :   WrongAnimal sound " << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

