#include "PhoneBook.hpp"
#include <iostream>
#include <cstring>

int		go_exit(void)
{
	std::cout << "exiting..." << std::endl;
	return (0);
}

int		error_found(std::string str)
{
	std::cout << str << std::endl;
	return (1);
}

int		go_add()
{
	return (0);
}

int		go_search()
{
	return (0);
}

int		main(void)
{
	std::string cmd;
	PhoneBook ph_book;

	ph_book.conts = new Contact[8];
	ph_book.conts[0].set_first_name("OLEG");
	std::cout << ph_book.conts[0].get_first_name() << std::endl;

	while (1)
	{
		std::cin >> cmd;
		if (cmd.compare("ADD") == 0)
			go_add();
		else if (cmd.compare("SEARCH") == 0)
			go_search();
		else if (cmd.compare("EXIT") == 0)
			return (go_exit());
		else
			return (error_found("error: bad input"));
	}
	return (0);
}