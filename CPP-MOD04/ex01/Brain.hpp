#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


class Brain
{
    private:
        string ideas[100];
    public:
        Brain();
        Brain(Brain &cpy);
        virtual ~Brain();
        Brain &operator= (const Brain &cpy);
        void   set_idea(int i, const string &idea);
        string get_idea(int i);

};

#endif
