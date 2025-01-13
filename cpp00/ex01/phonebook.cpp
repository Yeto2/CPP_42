/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:33:14 by yessemna          #+#    #+#             */
/*   Updated: 2024/11/18 15:01:07 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook() : count(0), index(0) {}

int stoint(const std::string& str)
{
    int res = 0;
    int i = 0;

    while(str[i])
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return res;
}

int handle_index(const std::string& str)
{
    int i = 0;
    
    if(str.length() > 1)
        return 0;
    while (str[i])
    {
        if (!std::isdigit(str[i]))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

void Phonebook::add(const Contact& contact)
{
    if (count < 8)
    {
        contacts[index] = contact;
        index++;
        count++;
    }
    else
    {
        contacts[7] = contact;
    }
}

void    get_safe_index(std::istream& input, Contact contacts[], int count, int& flag)
{
    std::string str;
    int i;

    std::cout << "Enter a valid index [0-7] : ";
    getline(input, str);
    if (input.eof())
    {
        std::cout << "\n";
        std::cout << "Reached end of input (EOF)." << std::endl;
        exit(0);
    }
    if (str.empty())
    {
        get_safe_index(input, contacts, count, flag);
        return;
    }
    if(!handle_index(str))
    {
        get_safe_index(input, contacts, count, flag);
        return;
    }
    i = stoint(str);
    if (i >= 0 && i < count)
    {
        std::cout << "first name: " << contacts[i].get_first_name() << std::endl;
        std::cout << "last name: " << contacts[i].get_last_name() << std::endl;
        std::cout << "nickname: " << contacts[i].get_nickname() << std::endl;
    }else
        std::cout << "Invalid index" << std::endl;
    flag = 1;
}

void Phonebook::search_contact()
{
    int flag = 0;

    if (count == 0)
    {
        std::cout << "Phonebook is empty";
        return;
    }
    std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "first name" << "|";
    std::cout << std::setw(10) << "last name" << "|";
    std::cout << std::setw(10) << "nickname" << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << contacts[i].get_first_name() << "|";
        std::cout << std::setw(10) << contacts[i].get_last_name() << "|";
        std::cout << std::setw(10) << contacts[i].get_nickname() << std::endl;
    }
    std::cout << " ";
    get_safe_index(std::cin, contacts, count, flag);
    std::cout << "Enter a valid command: (ADD, SEARCH, EXIT) : ";
}

Phonebook::~Phonebook() {}