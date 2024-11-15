#include "phonebook.hpp"
#include "contact.hpp"

int isAllDigits(const std::string& str)
{
    int i = 0;
    
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

void    fill_line(std::istream& input, std::string& cmd, std::string msg, int flag)
{
    getline(input, cmd);

    if(!isAllDigits(cmd) && flag)
    {
        std::cout << "phone number must contain only digits." << std::endl;
        while (1)
        {
            std::cout << msg;
            getline(input, cmd);
            if (input.eof()) 
            {
                std::cout << "\n";
                std::cout << "Reached end of input (EOF)." << std::endl;
                exit(0);
            }
            if(!isAllDigits(cmd))
            {
                std::cout << "phone number must contain only digits." << std::endl;
                continue;
            }else
                break;
        }
    }
    if (input.eof()) 
    {
        std::cout << "\n";
        std::cout << "Reached end of input (EOF)." << std::endl;
        exit(0);
    }
    if(cmd.empty())
    {
        std::cout << "cannot accept empty fields." << std::endl;
        while (1)
        {
            std::cout << msg << std::endl;
            getline(input, cmd);
            if (input.eof()) 
            {
                std::cout << "\n";
                std::cout << "Reached end of input (EOF)." << std::endl;
                exit(0);
            }
            if (cmd.empty())
            {
                std::cout << "cannot accept empty fields." << std::endl;
                continue;
            }else
                break;
        }
    }
}

int main()
{
    Phonebook pb;
    std::string msg;
    int flag = 0;

    std::cout << "Enter a command (ADD, SEARCH, EXIT) : ";
    std::string cmd;
    while (1)
    {
        if (flag == 1)
        {
            std::cout << "Enter a command (ADD, SEARCH, EXIT)" << std::endl;
            flag = 0;
        }
        getline(std::cin, cmd);
        if (std::cin.eof()) 
        {
            std::cout << "\n";
            std::cout << "Reached end of input (EOF)." << std::endl;
            exit(0);
        }
        if (!cmd.compare("EXIT"))
            break;
        else if (!cmd.compare("ADD"))
        {
            Contact contact;
            std::cout << "enter first name : ";
            std::string f_n;
            fill_line(std::cin, f_n, "enter first name : ", 0);
            std::cout << "enter last name : ";
            std::string l_n;
            fill_line(std::cin, l_n, "enter last name : ", 0);
            std::cout << "enter nickname : ";
            std::string n_n;
            fill_line(std::cin, n_n, "enter nickname : ", 0);
            std::cout << "enter phone number : ";
            std::string p_n;
            fill_line(std::cin, p_n, "enter phone number : ", 1);
            std::cout << "enter darkest secret : ";
            std::string d_s;
            fill_line(std::cin, d_s, "enter darkest secret : ", 0);
            flag = 1;
            contact.fill_contact(f_n, l_n, n_n, p_n, d_s);
            pb.add(contact);
        }
        else if (!cmd.compare("SEARCH"))
            pb.search_contact();
        else
            std::cout << "Enter a valid command: (ADD, SEARCH, EXIT) : ";
    }
    return 0;
}
