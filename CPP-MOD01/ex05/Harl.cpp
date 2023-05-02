#include "Harl.hpp"

void Harl::debug()
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. "<< endl;
	cout << "I really do!" << endl;
}

void Harl::info()
{
	cout << "I cannot believe adding extra bacon costs more money. You did not put enough bacon in my burger! " << endl;
	cout << "If you did, I would not be asking for more!" << endl;
}

void Harl::warning()
{
	cout << "I think I deserve to have some extra bacon for free. " << endl;
	cout << "I’ve been coming for years whereas you started working here since last month." << endl;
}


void Harl::error()
{
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(string level)
{
	void (Harl::*ptrf[4])() = {&Harl::debug, &Harl::info, \
	&Harl::warning, ptrf[3] = &Harl::error};
	while (level == "DEBUG")
	{
		(this->*ptrf[0])();
		return;
	}
	while (level == "INFO")
	{
		(this->*ptrf[1])();
		return;
	}
	while (level == "WARNING")
	{
		(this->*ptrf[2])();
		return;
	}
	while (level == "ERROR")
	{
		(this->*ptrf[3])();
		return;
	}
}