#include "PhoneBook.hpp"
#include "Contact.hpp"

void   PhoneBook::add(std::string name, std::string last_name ,std::string nbr, \
std::string secret, std::string nick_name)
{
    int a;

    a = nbr_of_contact % 8;
	contacts[a].setname(name);
	contacts[a].set_lastname(last_name);
	contacts[a].set_phone(nbr);
	contacts[a].set_nickname(nick_name);
	contacts[a].set_darkest(secret);
	nbr_of_contact++;
}

void	PhoneBook::display(int index)
{
	while(std::cin.fail()  || index < 0 || index >= nbr_of_contact)
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "\aYou've entered wrong " << " index! Try again; ";
		std::cin >> index;
	}
	std::cout << "Name: " << contacts[index].get_name() << std::endl;
	std::cout << "Last Name: " << contacts[index].get_last()<< std::endl;
	std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
	std::cout << "Phone Number: " << contacts[index].get_phone() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].get_secret() << std::endl;
}

int	PhoneBook::search()
{
	int i;
    int x;
	std::string buff;

	i = 0;
    x = nbr_of_contact;
    if (x > 8){x = 8;}
	if (x == 0){
		std::cout << "There is noone on the contact list!" << std::endl;
		return 0;
	}
    std::cout << "___________________________________________" << std::endl;
	std::cout << "index    |Name      |Last Name |Nick_name |" << std::endl;
	std::cout << "___________________________________________" << std::endl;
	while (i < x)
	{
		std::cout << "        " << i << "|";
        if (contacts[i].get_name().size() > 10) {
            buff = contacts[i].get_name().substr(0, 9);
            buff.push_back('.');
            std::cout << buff << "|";
        } else{
            buff = contacts[i].get_name().substr(0,contacts[i].get_name().size());
            for(;buff.size() < 10;){ buff.insert(0," ");}
            std::cout << buff << "|";
        }
        if (contacts[i].get_last().size() > 10) {
            buff = contacts[i].get_last().substr(0, 9);
            buff.push_back('.');
			std::cout << buff << "|";
		} else{
            buff = contacts[i].get_last().substr(0,contacts[i].get_last().size());
            for(;buff.size() < 10;){ buff.insert(0," ");}
            std::cout << buff << "|";
        }
        if (contacts[i].get_nickname().size() > 10) {
			buff = contacts[i].get_nickname().substr(0, 9);
			buff.push_back('.');
			std::cout << buff << "|" <<std::endl;
		} else{
            buff = contacts[i].get_nickname().substr(0,contacts[i].get_nickname().size());
            for(;buff.size() < 10;){ buff.insert(0," ");}
            std::cout << buff << "|" <<std::endl;
        }
        std::cout << "___________________________________________" << std::endl;
		i++;
	}
	return (1);
}