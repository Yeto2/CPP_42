#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>
#include <string>


class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string _type);
        Animal(const Animal &obj);
        Animal &operator=(const Animal &obj);

        const std::string &getType() const;
        virtual void makeSound() const = 0;
        virtual ~Animal();
};


#endif