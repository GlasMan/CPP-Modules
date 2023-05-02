#ifndef FILE_HPP
# define FILE_HPP

#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
#include <cstring>

using std::ios;
using std::string;
using std::cout;
using std::endl;

string read_file(char *av);
void replace(string &data, char *to_find, char *to_replace);
string create_out_file(char *av);

#endif