#include "Zombie.hpp"

Zombie::Zombie(const std::string& zombiename): name(zombiename) {};

void Zombie::announce()
{
    std::cout << name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
};

Zombie::~Zombie(){
    std::cout << name;
    std::cout << " - Destructor is called" << std::endl;
}