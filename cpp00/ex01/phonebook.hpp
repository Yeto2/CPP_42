#ifndef PHONEBIIK_HPP
#define PHONEBIIK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include "contact.hpp"

class Phonebook
{
private:
    Contact contacts[8];
    int count;
    int index;
public:
    Phonebook();
    void add(const Contact& contact);
    void search_contact();
    ~Phonebook();
};


#endif