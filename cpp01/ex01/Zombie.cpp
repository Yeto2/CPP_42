#include "Zombie.hpp"


Zombie::Zombie() {}

Zombie::Zombie(std::string& zombiename)
{
    this->name = zombiename;
}

void Zombie::announce(void)
{
    std::cout << name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
};

void Zombie::set_name(std::string name)
{
    this->name = name;
}