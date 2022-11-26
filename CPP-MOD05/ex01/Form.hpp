#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
using std::cout;
using std::endl;
using std::string;

class Bureaucrat;

class Form
{
    private:
        const string _name;
        bool  _is_signed;
		const int _grade_to_sign;
		const int _grade_to_execute;
	public:
		Form();
		Form(Form &cpy);
		Form(int sign_grade, int exec_grade);
		Form(const string name, int grade_to_sign, int grade_to_exec);
		~Form();
		Form &operator=(Form &cpy);
		void beSigned(Bureaucrat &to_sign);
		void set_status_signed(){_is_signed = true;}
		string get_name(){return _name;};
		int get_grade_to_sign() {return _grade_to_sign;}
		int get_grade_to_execute(){return _grade_to_execute;}
		bool is_signed(){return _is_signed;}
		const char *GradeTooHighException();
		const char *GradeTooLowException();
};

std::ostream &operator<< (std::ostream &os, Form &a);