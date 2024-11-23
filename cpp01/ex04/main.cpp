/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:39:13 by yessemna          #+#    #+#             */
/*   Updated: 2024/11/23 19:05:16 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void ft_replace(std::string& filename, std::string& s1, std::string& s2)
{
    (void)s1;
    (void)s2;
    std::string content;
    std::string line;
    
    std::ifstream inputFile(filename);
    std::cout << "hello" << std::endl;
    if(!inputFile.is_open())
        throw std::runtime_error("Error: Unable to open file " + filename);    
    while (std::getline(inputFile, line))
    {
        content += line + "\n";
    }
    inputFile.close();

    std::string::size_type pos = 0;

    while ((pos = content.find(s1, pos)) != std::string::npos)
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }
    // still need to write the changes in the file test.replace
    std::cout << content << std::endl;
}

int main(int argc, char const *argv[])
{
    std::string filename;
    std::string s1;
    std::string s2;

    if(argc != 4)
    {
        std::cerr << "Error: invalid arguments" << std::endl;
        return 1;
    }
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    try
    {
        ft_replace(filename, s1, s2);
    }
    catch(const std::runtime_error& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}

// int main() {
//     std::string text = "Hello, world! Welcome to the world of C++.";
//     std::string s1 = "world";
//     int pos = 0;

//     // Find and replace occurrences of s1 in text
//     while ((pos = text.find(s1, pos)) != std::string::npos) {
//         std::cout << "Found at position: " << pos << std::endl;
//         pos += s1.length(); // Move past the last found position
//     }
    
//     return 0;
// }