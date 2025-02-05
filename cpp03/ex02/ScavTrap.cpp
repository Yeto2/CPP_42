#include "ScavTrap.hpp"



ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap > Default Constructor called" << std::endl;
    Hit_points = 100;
    En_points = 50;
    att_dmg = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "ScavTrap > Constructor(name) called" << std::endl;
    Hit_points = 100;
    En_points = 50;
    att_dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
    std::cout << "ScavTrap > Copy Constructor called" << std::endl;
    *this = obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    std::cout << "ScavTrap > Copy assignment operator called" << std::endl;
	if(this != &obj)
	{
		this->Hit_points = obj.Hit_points;
		this->En_points = obj.En_points;
		this->att_dmg = obj.att_dmg;
		this->Name =  obj.Name;
	}
	return(*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (Hit_points > 0 && En_points > 0)
	{
    	std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << att_dmg << " points of damage!" << std::endl;
		En_points--;
		return;
	}
	std::cout << "ScavTrap " << Name << " Can't attack, no hit points or energy points left" << std::endl;
}

 void ScavTrap::guardGate()
 {
	if (Hit_points > 0 && En_points > 0)
	{
		std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
	}
 }

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap > Destructor called" << std::endl;
}
