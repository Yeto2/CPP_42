#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N < 0)
        N = 0;
    Zombie* zombie = new Zombie[N];

    for(int i = 0; i < N; i++)
        zombie[i].set_name(name);
    return zombie;
}

int main()
{

    int n = 5;

    Zombie *zombie = zombieHorde(n, "zombie");

    for(int i = 0; i < n; i++)
        zombie[i].announce();

    delete [] zombie;

    return 0;
}