/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:36:14 by yessemna          #+#    #+#             */
/*   Updated: 2024/11/22 17:58:30 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

// #include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    
private:
    std::string name;
    Weapon weapon;
public:
    HumanB(const std::string& humanName)
    {
        name = humanName;
    };
    void setWeapon(Weapon w)
    {
        weapon = w;
    }
    void attack()
    {
        std::cout << name << " attacks with their " << weapon.getType() << std::endl;
    };
    ~HumanB(){};
};

#endif