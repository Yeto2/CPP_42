#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("defaultDt_clap_trap")
{
    std::cout << "DiamondTrap > Default Constructor called" << std::endl;
    this->Hit_points = FragTrap::Hit_points;
    this->En_points = ScavTrap::En_points;
    this->att_dmg = FragTrap::att_dmg;
    this->_name = "defaultDt";
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_trap")
{
    std::cout << "DiamondTrap > Constructor(name) called" << std::endl;
    this->Hit_points = FragTrap::Hit_points;
    this->En_points = ScavTrap::En_points;
    this->att_dmg = FragTrap::att_dmg;
    this->_name = name;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
    std::cout << "DiamondTrap > Copy Constructor called" << std::endl;
    *this = obj;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
    std::cout << "DiamondTrap > Copy assignment operator called" << std::endl;
	if(this != &obj)
	{
		this->Hit_points = obj.Hit_points;
		this->En_points = obj.En_points;
		this->att_dmg = obj.att_dmg;
		this->_name =  obj.Name + "_clap_name";
	}
	return(*this);
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

 void DiamondTrap::whoAmI()
 {
	if (Hit_points > 0 && En_points > 0)
	{
		std::cout << "DiamondTrap name : " << _name << " and my origin ClapTrap name : " << ClapTrap::Name << std::endl;
	}
 }

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap > Destructor called" << std::endl;
}
