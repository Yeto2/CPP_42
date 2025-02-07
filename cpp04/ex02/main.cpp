#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"

void l()
{
    system("leaks Polymorphism");
}
int main()
{
// atexit(l);

// ---------------------------------------- to test Abstact class

// const Animal *d = new Animal();
// d->makeSound();

// ---------------------------------------- create and animals

    const Animal *cage[10];

    for(int i = 0; i < 5; i++)
    {
        cage[i] = new Cat();
    }

    for(int i = 5; i < 10; i++)
    {
        cage[i] = new Dog();
    }

// ---------------------------------------- make Sound

    for(int i = 0; i < 10; i++)
    {
        cage[i]->makeSound();
    }

// ---------------------------------------- Delete Animals

    for(int i = 0; i < 10; i++)
    {
        delete(cage[i]);
    }

// ---------------------------------------- Deep copy test

    // Dog *dogA = new Dog();

    // dogA->setIdea(0, "no time for feelings");
    // dogA->setIdea(1, "b elil w nhar wakha bo7di f dar");
    // dogA->setIdea(2, "mazal kanfakar fik oh no");
    // // dogA->setIdea(101, "we9ti ghali ga3ma msali lik");

    // Dog *dogB = new Dog(*dogA);

    // std::cout << "The " << dogA->getType() << " A has the following ideas: " << std::endl;
    // dogA->get_ideas();

    // delete(dogA);

    // std::cout << "The " << dogB->getType() << " B has the following ideas: " << std::endl;
    // dogB->get_ideas();
    // delete(dogB);

    return 0;
}