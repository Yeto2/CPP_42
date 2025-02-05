#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor called" << std::endl;
        Hit_points = 10;
        En_points = 10;
        att_dmg = 0;
	    Name = "unknown";
}

ClapTrap::ClapTrap(const std::string &name)
{
    std::cout << "Constructor(name) called" << std::endl;
	Hit_points = 10;
	En_points = 10;
	att_dmg = 0;
	Name = name;
}


ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if(this != obj)
	{
		this->Hit_points = obj.Hit_points;
		this->En_points = obj.En_points;
		this->att_dmg = obj.att_dmg;
		this->Name =  obj.Name;
	}
	return(*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (Hit_points > 0 && En_points > 0)
	{
    	std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << att_dmg << " points of damage!" << std::endl;
		En_points--;
		return;
	}
	std::cout << "ClapTrap " << Name << " Can't attack, no hit points or energy points left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (Hit_points > 0 && En_points > 0)
	{
		Hit_points -= amount;
		if(Hit_points < 0)
			Hit_points = 0;
    	std::cout << "ClapTrap " << Name << " Takes " << amount << " of damage points " << "| health points remaining " << Hit_points << std::endl;
		return;
	}
	std::cout << "ClapTrap " << Name << " Already destroyed !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (Hit_points > 0 && En_points > 0)
	{
		Hit_points += amount;
		En_points--;
    	std::cout << "ClapTrap " << Name << " repair itself, gained " << amount << " of Hit points " << "| current health points " << Hit_points << std::endl;
		return;
	}
	std::cout << "ClapTrap " <<  Name << " Can't repair, no hit points or energy points left" << std::endl;
	
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}
