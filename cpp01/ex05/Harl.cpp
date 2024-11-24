/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 21:55:32 by yessemna          #+#    #+#             */
/*   Updated: 2024/11/24 22:40:30 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "DEBUG :\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-";
    std::cout << "triple-pickle-specialketchup burger. I really do!" << std::endl;
};

void Harl::info( void )
{
    std::cout << "INFO :\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t ";
    std::cout << "put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};

void Harl::warning( void )
{
    std::cout << "WARNING :\n";
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
};

void Harl::error( void )
{
    std::cout << "ERROR :\n";
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
};

void Harl::complain(std::string level)
{
    void (Harl::*memberfuncptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    std::string lvls[] = {"DEBUG","INFO","WARNING","ERROR"};
    
    for(int i = 0; i < 4; i++)
    {
        if(level == lvls[i])
        {
            (this->*memberfuncptr[i])();
            return;
        }
    }
};