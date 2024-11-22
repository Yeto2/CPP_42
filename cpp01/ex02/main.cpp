#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;


    std::cout << "#### ADDRESSES" << std::endl;

    std::cout << "- string : ";
    std::cout << &string << std::endl;

    std::cout << "- stringPTR : ";
    std::cout << stringPTR << std::endl;
    std::cout << "- stringREF : ";
    std::cout << &stringREF << std::endl;
    std::cout << "#### Values" << std::endl ;

    std::cout << "- string : ";
    std::cout << string << std::endl;
    std::cout << "- stringPTR : ";
    std::cout << *stringPTR << std::endl;
    std::cout << "- stringREF : ";
    std::cout << stringREF << std::endl;



    return 0;
}