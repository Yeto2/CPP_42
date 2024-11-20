#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie(const std::string& zombiename);
    void announce();
    ~Zombie();
};

#endif