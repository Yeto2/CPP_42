#include <iostream>

void    to_upper(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
        if (std::islower(str[i]))
            str[i] = std::toupper((str[i]));
    std::cout << str;
}

int main(int argc, char const *argv[])
{
    std::string str;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        for (int i = 1; argv[i]; i++)
        {
            str = argv[i];
            to_upper(str);
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
