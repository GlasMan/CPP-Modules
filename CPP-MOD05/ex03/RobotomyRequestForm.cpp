#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("Default") {}

RobotomyRequestForm::RobotomyRequestForm(const string target) : Form("RobotomyRequestForm", 72, 45), _target(target){
	cout << "RobotomyRequestForm Constructor called" << endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : Form(cpy), _target(cpy._target) {
	(*this) = cpy;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	cout << "RobotomyRequestForm Destructor called" << endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy) {
	if (this == &cpy)
		return (*this);
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	static int i = 1;
	if (can_be_executed(executor)){
		if ((i & 1)) {
			cout << "VJVJVJVJVJV (Drill noses!)" << endl;
			cout << _target << " has been robotomized !" << endl;
		}
		else
			cout << "Robotomy Failed" << endl;
	}
	i++;
}
