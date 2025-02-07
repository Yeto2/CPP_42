#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default Constructor called" << std::endl;
    type = "Dog";
    _brain = new Brain();
}

Dog::Dog(const Dog &obj) : Animal()
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
    for(int i = 0 ; i < 3 ; i++)
    {
        std::cout << "The idea number : " << i << " For the Dog is : " << this->_brain->getIdea(i)  << " - At adress : "<< this->_brain->get_addr(i) << std::endl;
    }
}

void Dog::setIdea(int i, std::string idea)
{
    this->_brain->setIdea(i, idea);
}

Dog::~Dog()
{
    delete(this->_brain);
    std::cout << "Dog Destructor called" << std::endl;
}

