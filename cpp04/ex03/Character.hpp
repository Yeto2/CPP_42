#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"


struct Node {
    AMateria* materia;
    Node* next;
};

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *inventory[4];
        Node* floor;
        static int flag;
    public:
        Character();
        Character(const std::string &name);
        Character(const Character &obj);
        Character &operator=(const Character &obj);

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

        virtual ~Character();
};


#endif