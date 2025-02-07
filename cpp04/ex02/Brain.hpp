#ifndef BRAIN_HPP
#define BRAIN_HPP


#include <iostream>
#include <string>


class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &obj);
        Brain &operator=(const Brain &obj);

        const std::string getIdea(int i) const;
        void setIdea(int i, std::string idea);
        const std::string *get_addr(int i) const;
        virtual ~Brain();
};


#endif