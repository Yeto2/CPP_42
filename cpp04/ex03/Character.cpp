#include "Character.hpp"

Character::Character() : name("Default")
{
    for(int i = 0; i < 4; i++)
    {
        this->inventory[i] = NULL;
    }
}

Character::Character(const std::string &name) : name(name)
{
    for(int i = 0; i < 4; i++)
    {
        this->inventory[i] = NULL;
    }
}

Character::Character(const Character &obj)
{
    *this = obj;
}


Character &Character::operator=(const Character &obj)
{
    if(this != &obj)
    {
        for(int i = 0; i < 4; i++)
        {
            if(this->inventory[i])
                delete this->inventory[i];
            if(obj.inventory[i])
                this->inventory[i] = obj.inventory[i]->clone();
            else
                this->inventory[i] = NULL;
        }
    }
    return (*this);
}


std::string const &Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    {
        if(this->inventory[i] == NULL)
        {
            std::cout << this->name << " equip " << m->getType() << " in slot " << i << std::endl;
            this->inventory[i] = m;
            return;
        }
    }
    std::cout << this->name << " Cannot equip the materia, the slots are Full" << std::endl;
    delete m;
}

void Character::unequip(int idx)
{
    if(idx >= 0 && idx < 4)
    {
        std::cout << this->name << " Unequip a Materia" << std::endl;
        this->inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if(idx >= 0 && idx < 4 && this->inventory[idx])
    {
        this->inventory[idx]->use(target);
    }else
        std::cout << this->name << " Have nothing to do " << std::endl;
}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if(this->inventory[i])
            delete this->inventory[i];
    }
}
