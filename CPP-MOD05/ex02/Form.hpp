#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <cstring>
#include <fstream>
#include <unistd.h>
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
		Form(const Form &cpy);
		Form(int sign_grade, int exec_grade);
		Form(const string name, int grade_to_sign, int grade_to_exec);
		virtual ~Form();
		Form &operator=(const Form &cpy);
		void beSigned(Bureaucrat &to_sign);
		void set_status_signed(){_is_signed = true;}
		string get_name() const {return _name;}
		int get_grade_to_sign() {return _grade_to_sign;}
		int get_grade_to_execute(){return _grade_to_execute;}
		bool is_signed(){return _is_signed;}
		int	can_be_executed(const Bureaucrat &executor) const;
		virtual void execute(Bureaucrat const &executor) const;
		const char *GradeTooHighException() const;
		const char *GradeTooLowException() const;
		const char *FormIsNotSigned() const;
};

std::ostream &operator<< (std::ostream &os, Form &a);

#endif