/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:09:42 by yessemna          #+#    #+#             */
/*   Updated: 2024/11/22 17:33:59 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

// #include <string>
#include "Weapon.hpp"
#include <iostream>
class HumanA
{

private:
    std::string name;
    Weapon weapon;
public:
    HumanA(const std::string& humanName, Weapon w)
    {
        name = humanName;
        w.setType(w.getType());
    };
    void attack()
    {
        std::cout << name << " attacks with their " << weapon.getType() << std::endl;
    };

};

#endif