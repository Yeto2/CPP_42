#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap &obj);

        ScavTrap &operator=(const ScavTrap &obj);
        void attack(const std::string& target);
        void guardGate();

        ~ScavTrap();
};

#endif