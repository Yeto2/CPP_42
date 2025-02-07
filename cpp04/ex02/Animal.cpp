#include "Animal.hpp"

Animal::Animal() : type("default")
{
    std::cout << "Animal default Constructor called" << std::endl;
}

Animal::Animal(std::string _type) : type(_type)
{
    std::cout << "Animal " << this->getType() << " Constructor(type) called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Animal " << this->getType() << " Copy Constructor called" << std::endl;
    *this = obj;
}

Animal &Animal::operator=(const Animal &obj)
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return (*this);
}

const std::string &Animal::getType() const
{
    return this->type;
}

// void Animal::makeSound() const
// {
// }

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

