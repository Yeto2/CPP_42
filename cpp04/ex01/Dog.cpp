#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default Constructor called" << std::endl;
    type = "Dog";
    _brain = new Brain();
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
    {
        this->type = obj.type;
        if (this->_brain)
            delete this->_brain;
        this->_brain = new Brain();
        *this->_brain = *obj._brain;
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << this->getType() << " says : << HAAB HAB HAAB >> " << std::endl;
}

void Dog::get_ideas() const
{
    for(int i = 0 ; i < 100 ; i++)
    {
        std::cout << "The idea number : " << i << " For the Dog is : " << this->_brain->getIdea(i) << std::endl;
    }
}

void Dog::setIdea(int i, std::string idea)
{
    this->_brain->setIdea(i, idea);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

