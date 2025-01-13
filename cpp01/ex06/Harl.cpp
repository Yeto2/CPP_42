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
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-";
    std::cout << "triple-pickle-specialketchup burger. I really do!" << std::endl;
};

void Harl::info( void )
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t ";
    std::cout << "put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};

void Harl::warning( void )
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
};

void Harl::error( void )
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
};

int err( void )
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    exit(1);
    return 1;
}

void Harl::complain(std::string level)
{
    void (Harl::*memberfuncptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string lvls[] = {"DEBUG","INFO","WARNING","ERROR"};

    (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR" && err());

    switch (level[0])
    {
        case 'D':
            (this->*memberfuncptr[0])();
        case 'I':
            (this->*memberfuncptr[1])();
        case 'W':
            (this->*memberfuncptr[2])();
        case 'E':
            (this->*memberfuncptr[3])();
    }
};