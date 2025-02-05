#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default Constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(std::string _type) : Animal(_type)
{
    std::cout << "Cat Constructor(type) called" << std::endl;
    type = _type;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    *this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << this->getType() << " says :  << Meow Meaw >> " << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

