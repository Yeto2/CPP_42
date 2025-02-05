#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public ScavTrap , public FragTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(const std::string &name);
        DiamondTrap(const DiamondTrap &obj);

        DiamondTrap &operator=(const DiamondTrap &obj);
        void attack(const std::string& target);
        void whoAmI();

        ~DiamondTrap();
};

#endif