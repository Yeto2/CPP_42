#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default Constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(std::string _type) : Animal(_type)
{
    std::cout << "Dog Constructor(type) called" << std::endl;
    type = _type;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
    std::cout << "Dog Copy Constructor called" << std::endl;
    *this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << this->getType() << " says : << HAAB HAB HAAB >> " << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

