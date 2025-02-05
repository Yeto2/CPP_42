#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(std::string _type);
        Cat(const Cat &obj);
        Cat &operator=(const Cat &obj);
        void makeSound() const;
        void get_ideas() const;
        void setIdea(int i, std::string idea);
        ~Cat();
};

#endif
