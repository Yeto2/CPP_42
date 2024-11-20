#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string& zombiename);
        void announce(void);
        void set_name(std::string name)
        ~Zombie();
};

#endif