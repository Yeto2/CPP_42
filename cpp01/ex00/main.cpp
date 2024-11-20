#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *new_zombie = new Zombie(name);
    return (new_zombie);
}
void randomChump(std::string name)
{
    Zombie Z(name);
    Z.announce();
}

int main()
{
    // Anounce Zombie
    // Zombie test("HI");
    // test.announce();
    // randomChump
    randomChump("randome");

    // newZombie
    Zombie *test = newZombie("name");
    test->announce();
    delete test;


    return 0;
}
