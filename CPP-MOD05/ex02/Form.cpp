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
			//exit(1);
		}
	}
}

Form::Form(const Form &cpy) : _name(cpy._name), _is_signed(cpy._is_signed), _grade_to_sign(cpy._grade_to_sign), _grade_to_execute(cpy._grade_to_execute) {
	std::cout << "Form Copy Constructor called" << endl;
	*this = cpy;
}

Form &Form::operator=(const Form &cpy) {
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

int Form::can_be_executed(const Bureaucrat &executor) const{
	bool x = this->_is_signed;

	try {
		if (!x)
			throw Form::FormIsNotSigned();
		else if (executor.getGrade() > this->_grade_to_execute)
			throw Form::GradeTooHighException();
	}
	catch (const char *exception)
	{
		cout << exception << endl;
		return 0;
	}
	return 1;
}

void Form::execute(const Bureaucrat &executor) const {
	(void)executor;
}

const char *Form::GradeTooHighException() const{
	return "Form Grade too High!";
}

const char *Form::GradeTooLowException() const{
	return "Form Grade too Low";
}

const char *Form::FormIsNotSigned() const{
	return "Form is not signed!";
}

Form::~Form() {
	cout << "Form Destructor called" << endl;
}

