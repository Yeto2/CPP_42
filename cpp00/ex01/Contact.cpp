#include "contact.hpp"

void Contact::fill_contact(const std::string& f_n, const std::string& l_n,
    const std::string& n_n, const std::string& p_n, const std::string& d_s)
{
    first_name = f_n;
    last_name = l_n;
    nickname = n_n;
    phone_number = p_n;
    darkest_secret = d_s;
}

std::string Contact::get_first_name()
{
    if(first_name.length() > 10)
    {
        first_name.resize(10);
        first_name[9] = '.';
    }
    return first_name;
}

std::string Contact::get_last_name()
{
    if(last_name.length() > 10)
    {
        last_name.resize(10);
        last_name[9] = '.';
    }
    return last_name;
}
std::string Contact::get_nickname()
{
    if(nickname.length() > 10)
    {
        nickname.resize(10);
        nickname[9] = '.';
    }
    return nickname;
}
