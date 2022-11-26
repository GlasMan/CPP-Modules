#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("Default"){}

PresidentialPardonForm::PresidentialPardonForm(const string &target) : Form("PresidentialPardonForm", 25, 5), _target(target){
	cout << "PresidentialPardonForm Constructor called" << endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : Form(cpy), _target(cpy._target) {
	(*this) = cpy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy) {
	if (this == &cpy)
		return (*this);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	cout << "PresidentialPardonForm Destructor called" << endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const{
	if(can_be_executed(executor)){
		cout << _target << " has been pardoned by 'Zaphod Beeblebrox'" << endl;
	}
}