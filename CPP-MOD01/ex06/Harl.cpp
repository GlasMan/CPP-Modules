#include "Harl.hpp"

void Harl::debug()
{
	cout << "[ DEBUG ] " << endl;
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. ";
	cout << "I really do!" << endl << endl;;
}

void Harl::info()
{
	cout << "[ INFO ] " << endl;
	cout << "I cannot believe adding extra bacon costs more money. You did not put enough bacon in my burger! " << endl;
	cout << "If you did, I would not be asking for more!" << endl << endl;;
}

void Harl::warning()
{
	cout << "[ WARNING ] " << endl;
	cout << "I think I deserve to have some extra bacon for free. " << endl;
	cout << "I’ve been coming for years whereas you started working here since last month." << endl << endl;
}


void Harl::error()
{
	cout << "[ ERROR ] " << endl;
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(string level)
{
	void (Harl::*ptrf[4])() = {&Harl::debug, &Harl::info, \
	&Harl::warning, ptrf[3] = &Harl::error};

	switch (get_level(level))
	{
		case 0:
			(this->*ptrf[0])();
		case 1:
			(this->*ptrf[1])();
		case 2:
			(this->*ptrf[2])();
		case 3:
			(this->*ptrf[3])();
			break;
		default:
			cout << "[ Probably complaining about insignificant problems ]" << endl;
			break;
	}
}