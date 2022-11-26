#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

using std::cout;
using std::endl;
using std::string;

class Form;

class Bureaucrat
{
    private:
        const char *_name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(int grade, const char *name);
        Bureaucrat(const Bureaucrat &cpy);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &cpy);
		void signForm(Form &form);
		void executeForm(Form const & form);
		const char *getName() const;
        int getGrade() const;
        void increase_grade();
        void decrease_grade();
        const char  *GradeTooHighException();
        const char  *GradeTooLowException();
};

std::ostream &operator<< (std::ostream &os, Bureaucrat const &a);