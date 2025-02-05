#include "FragTrap.hpp"

int main()
{
    FragTrap st = FragTrap("robot");
    st.highFivesGuys();
    st.attack("kolo");
    st.takeDamage(50);
    st.takeDamage(20);
    st.beRepaired(10);
    st.takeDamage(40);
    st.beRepaired(10);
    st.attack("polo");
    st = FragTrap();
    for(int i = 0; i < 101; i++)
        st.attack("pp");
}
