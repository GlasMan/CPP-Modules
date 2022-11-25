#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>

using std::cout;
using std::endl;
using std::string;

class Base
{
public:
	virtual  ~Base(){};

};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif
