#include "FragTrap.hpp"



FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap > Default Constructor called" << std::endl;
    Hit_points = 100;
    En_points = 100;
    att_dmg = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "FragTrap > Constructor(name) called" << std::endl;
    Hit_points = 100;
    En_points = 100;
    att_dmg = 30;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
    std::cout << "FragTrap > Copy Constructor called" << std::endl;
    *this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    std::cout << "FragTrap > Copy assignment operator called" << std::endl;
	if(this != &obj)
	{
		this->Hit_points = obj.Hit_points;
		this->En_points = obj.En_points;
		this->att_dmg = obj.att_dmg;
		this->Name =  obj.Name;
	}
	return(*this);
}

 void FragTrap::highFivesGuys()
 {
	if (Hit_points > 0 && En_points > 0)
	{
		std::cout << "FragTrap > " << Name << " high five !" << std::endl;
	}
 }

FragTrap::~FragTrap()
{
    std::cout << "FragTrap > Destructor called" << std::endl;
}
