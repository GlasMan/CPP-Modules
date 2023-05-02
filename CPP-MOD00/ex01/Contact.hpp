#ifndef CONTACT_H
#define CONTACT_H

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string phone_number;
		std::string nick_name;
		std::string darkest_secret;
	public:
		void	setname(std::string a){first_name = a;}
		void	set_lastname(std::string a){last_name = a;}
		void	set_phone(std::string a){phone_number = a;}
		void 	set_nickname(std::string a) {nick_name = a;}
		void	set_darkest(std::string a){darkest_secret = a;}
		std::string get_name(){return first_name;}
		std::string get_last(){return  last_name;}
		std::string get_phone(){return phone_number;}
		std::string get_nickname(){return nick_name;}
		std::string get_secret(){return darkest_secret;}
};

#endif
