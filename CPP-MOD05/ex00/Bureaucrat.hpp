#ifndef  BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

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
        const char *getName() const;
        int getGrade() const;
        void increase_grade();
        void decrease_grade();
        const char  *GradeTooHighException();
        const char  *GradeTooLowException();
};

std::ostream &operator<< (std::ostream &os, Bureaucrat const &a);
















#endif