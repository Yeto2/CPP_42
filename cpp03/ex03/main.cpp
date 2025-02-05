#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap dt = DiamondTrap("robot");
    
    dt.guardGate();
    dt.highFivesGuys();
    dt.whoAmI();
    dt.attack("kolo");
    dt.takeDamage(444);
    dt.beRepaired(100);
    dt.highFivesGuys();
    // DiamondTrap any;
    // any.whoAmI();
    // for (int i = 0; i < 51; i++)
    //     any.attack("jojo");
}