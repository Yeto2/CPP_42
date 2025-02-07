#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        this->inventory[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    *this = obj;
}


MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
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

void MateriaSource::learnMateria(AMateria *m)
{
    for(int i = 0; i < 4; i++)
    {
        if(this->inventory[i] == NULL)
        {
            std::cout << "MateriaSource learn : " << m->getType() << std::endl;
            this->inventory[i] = m;
            return;
        }
    }
    std::cout << "Inventory is full" << std::endl;
    delete m;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if(this->inventory[i] != NULL && this->inventory[i]->getType() == type)
            return (this->inventory[i]->clone());
    }
    std::cout << "Type is unknown" << std::endl;
    return (0);
}


MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if(this->inventory[i])
            delete this->inventory[i];
    }
}
