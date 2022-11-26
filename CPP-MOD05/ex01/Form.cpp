#include "Form.hpp"

Form::Form(): _name("Form"), _is_signed(false),  _grade_to_sign(150), _grade_to_execute(150){
	cout << "Form Constructor called" << endl;
}

Form::Form(const string name, int grade_to_sign, int grade_to_exec) : _name(name), _is_signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_exec){
	cout << "Form Constructor called" << endl;
	try {
		if (_grade_to_sign <= 0 || _grade_to_execute <= 0) {
			throw Form::GradeTooHighException();
		}
		else if (_grade_to_sign > 150 || _grade_to_execute > 150){
			throw Form::GradeTooLowException();
		}
		else
			throw "";
	}
	catch (const char *exception)
	{
		if (strlen(exception) > 0){
			cout << exception << endl;
			exit(1);
		}
	}
}

Form::Form(Form &cpy) : _name(cpy._name), _is_signed(cpy._is_signed), _grade_to_sign(cpy._grade_to_sign), _grade_to_execute(cpy._grade_to_execute) {
	std::cout << "Form Copy Constructor called" << endl;
	*this = cpy;
}

Form &Form::operator=(Form &cpy) {
	if (this == &cpy)
		return (*this);
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Form &a){
	os << a.get_name() << ", Grade to execute: " << a.get_grade_to_execute() << ", Grade to sign: " << a.get_grade_to_sign();
	if (a.is_signed())
		os << ", signed." << endl;
	else
		os << ", not signed." << endl;
	return os;
}

void Form::beSigned(Bureaucrat &to_sign) {
	try {
		if (to_sign.getGrade() <= this->get_grade_to_sign()){
			this->_is_signed = true;
			throw "";
		}
		else
			throw Form::GradeTooLowException();
	}
	catch (const char *exception){
		if(strlen(exception) > 0)
			cout << exception << endl;
	}
}

const char *Form::GradeTooHighException() {
	return "Form Grade too Low!";
}

const char *Form::GradeTooLowException() {
	return "Form Grade too high!";
}

Form::~Form() {
	cout << "Form Destructor called" << endl;
}

