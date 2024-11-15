#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
public:
    // Contact();
    void fill_contact(const std::string& f_n, const std::string& l_n,
        const std::string& n_n, const std::string& p_n, const std::string& d_s);

    std::string get_first_name();
    std::string get_last_name();
    std::string get_nickname();
};

#endif