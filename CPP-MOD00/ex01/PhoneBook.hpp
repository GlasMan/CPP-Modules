#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <sys/wait.h>
#include <unistd.h>


class PhoneBook : public Contact
{
	private:
		Contact contacts[8];
		int nbr_of_contact;
    public:
		void	set_nbr(){nbr_of_contact = 0;};
		void	add(std::string name, std::string last_name ,std::string nbr, std::string secret, std::string nick_name);
        void	display(int index);
		int		search();
		void	ft_exit();
};

#endif