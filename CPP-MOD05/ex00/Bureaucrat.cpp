#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    cout << "Bureaucrat Default Constructor called" << endl;
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(int grade, const char *name) {
    cout << "Bureaucrat constructor called" << endl;
    this->_grade = grade;
    this->_name = name;
    try {
        if (grade <= 0) {
			this->_grade = 150;
			throw Bureaucrat::GradeTooHighException();
		}
        else if (grade > 150)
		{
			this->_grade = 150;
            throw Bureaucrat::GradeTooLowException();
		}
		else
			throw "";
        }
    catch (const char *exception)
    {
		if (strlen(exception) > 0)
        	cout << exception << endl;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) {
    (*this) = cpy;
}

Bureaucrat::~Bureaucrat() {
    cout << "Bureaucrat destructor called" << endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cpy) {
    this->_grade = cpy._grade;
    this->_name = cpy._name;
    return (*this);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &a) {
    os << a.getName() << ", bureaucrat grade " << a.getGrade();
    return os;
}

int Bureaucrat::getGrade() const{
    return (this->_grade);
}

const char *Bureaucrat::getName() const{
    return (this->_name);
}

void Bureaucrat::increase_grade() {
    int x = (this->_grade - 1);
    try {
        if (x <= 0)
            throw Bureaucrat::GradeTooHighException();
        else
		{
			this->_grade--;
            throw "";
		}
    }
    catch (const char * a){
		if (strlen(a) > 0)
        	cout << a << endl;
    }
}

void Bureaucrat::decrease_grade() {
    int x = (this->_grade + 1);
    try {
        if (x > 150)
            throw Bureaucrat::GradeTooLowException();
        else{
            this->_grade++;
			throw "";
		}
    }
    catch (const char *a){
		if (strlen(a) > 0)
			cout << a << endl;
    }
}

const char *Bureaucrat::GradeTooHighException() {
    return "Grade too high!  out of range";
}

const char *Bureaucrat::GradeTooLowException() {
    return "Grade too Low! out of range";
}


