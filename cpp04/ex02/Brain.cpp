#include "Brain.hpp"


Brain::Brain()
{
    std::cout << "brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    std::cout << "brain copy constructor called" << std::endl;
    *this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{
    std::cout << "brain copy assignment operator called" << std::endl;
    if(this == &obj)
        return (*this);
    for(int i = 0; i < 100; i++)
    {
        if(obj.ideas[i].length() > 0)
            this->ideas[i].assign(obj.ideas[i]);
    }
    return (*this);
}

const std::string Brain::getIdea(int i) const
{
    if(i < 100)
        return (this->ideas[i]);
    else
        return "only 100 idea are available";
}

void Brain::setIdea(int i, std::string idea)
{
    if(i < 100)
    {
        this->ideas[i] = idea;
    }else
    {
        std::cout << "only 100 idea are available" << std::endl;
    }
}
const std::string *Brain::get_addr(int i) const
{
    if(i < 100)
    {
        const std::string &addr = this->ideas[i];
        return(&addr);
    }
    return (NULL);
}

Brain::~Brain()
{
    std::cout << "brain destructor called" << std::endl;
}