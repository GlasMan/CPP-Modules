#include "PhoneBook.hpp"
#include "Contact.hpp"

void get_input(std::string arg, std::string &input)
{
	std::cout << arg;
	getline(std::cin, input);
	if(input.size() == 0)
	{
		std::cout << "Wrong entry !" << std::endl;
		for(; input.size() == 0;){
			std::cout << arg;
			getline(std::cin, input);
		}
	}

}

void	search_for(PhoneBook book)
{
	int index;
	std::string a;
	if (!book.search()){
		sleep(2);
		return;
	}
	std::cout << "Select the contact index that you want to see contact information; ";
	std::cin >> index;
	book.display(index);
	std::cout << "Pres Enter to continue";
	getline(std::cin, a);
	getline(std::cin, a);
}

void	get_information(PhoneBook &book)
{
	std::string name;
	std::string last_name;
	std::string number;
	std::string nick_name;
	std::string secret;
	get_input("First Name: ", name);
	get_input("Last Name: ", last_name);
	get_input("Nickname: ", nick_name);
	get_input("Phone Number: ", number);
	get_input("Darkest Secret: ", secret);
	book.add(name, last_name, number, secret, nick_name);
	std::cout << "Succesfuly added: " << name << std::endl;
	sleep(1);
}

int main()
{
	PhoneBook book;
	book.set_nbr();
	std::string input;
	while (1)
	{
		std::cout << "************ Welcome to PhoneBook program ************" << std::endl;
		std::cout << "You can add 8 contact to your phone book and these are the methods you can use\n" << std::endl;
		std::cout << "'ADD' : For create a contact and add to the Phonebook" << std::endl;
		std::cout << "'SEARCH': To search specific contact" << std::endl;
		std::cout << "'EXIT': To Exit program" << std::endl;
		std::cout << "Command: ";
		getline(std::cin, input);
		if (std::cin.eof())
			exit(1);
		else if (input == "ADD")
			get_information(book);
		else if (input == "SEARCH")
			search_for(book);
		else if (input == "EXIT")
			break;
		else{
			std::cout << "Wrong Command! " << input << std::endl;
			usleep(400000);
		}
		system("clear");
	}
}
