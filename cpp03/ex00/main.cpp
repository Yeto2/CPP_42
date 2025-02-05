#include "ClapTrap.hpp"


int main()
{
    ClapTrap ct = ClapTrap("robot");
    ct.attack("kolo");
    ct.takeDamage(20);
    ct.takeDamage(5);
}