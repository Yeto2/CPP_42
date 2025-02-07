#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default Constructor called" << std::endl;
    type = "Cat";
    _brain = new Brain();
}

Cat::Cat(const Cat &obj) : Animal()
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    *this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
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

void Cat::makeSound() const
{
    std::cout << this->getType() << " says :  << Meow Meaw >> " << std::endl;
}

void Cat::get_ideas() const
{
    for(int i = 0 ; i < 3 ; i++)
    {
        std::cout << "The idea number : " << i << " For the cat is : " << this->_brain->getIdea(i) << " - At adress : " << this->_brain->get_addr(i) << std::endl;
    }
}

void Cat::setIdea(int i, std::string idea)
{
    this->_brain->setIdea(i, idea);
}

Cat::~Cat()
{
    delete(this->_brain);
    std::cout << "Cat Destructor called" << std::endl;
}

