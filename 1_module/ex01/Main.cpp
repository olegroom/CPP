#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <cctype>

int		go_exit(void)
{
	std::cout << "exiting..." << std::endl;
	return (0);
}

int		error_found(std::string str)
{
	std::cerr << str;
	return (1);
}

void	fill_contact(PhoneBook *ph_book, int i)
{
	std::string cur_str;

	std::cout << "Enter the first name: ";
	std::cin >> cur_str;
	ph_book->conts[i].set_first_name(cur_str);
	std::cout << "Enter the last name: ";
	std::cin >> cur_str;
	ph_book->conts[i].set_last_name(cur_str);
	std::cout << "Enter the nickname: ";
	std::cin >> cur_str;
	ph_book->conts[i].set_nickname(cur_str);
	std::cout << "Enter the number: ";
	std::cin >> cur_str;
	ph_book->conts[i].set_number(cur_str);
	std::cout << "Enter the secret: ";
	std::cin >> cur_str;
	ph_book->conts[i].set_secret(cur_str);
}

int		go_add(PhoneBook *ph_book)
{
	static int i = 0;
	ph_book->arr_size++;

	if (i == 8)
		i = 0;
	fill_contact(ph_book, i);
	i++;
	return(0);
}

void	print_10char(std::string str)
{
	int i = -1;
	int size = str.length();

	if (size > 10)
	{
		while (++i < 9)
			std::cout << str[i];
		std::cout << '.';
	}
	else if (size <= 10)
		std::cout << std::setw(10) << str;
	std::cout << '|';
}

void	print_info(Contact *cont)
{
	print_10char(cont->get_first_name());
	print_10char(cont->get_last_name());
	print_10char(cont->get_nickname());
}

int		make_table(PhoneBook *ph_book)
{
	int i = 0;

	print_10char("index");
	print_10char("first_name");
	print_10char("sec_name");
	print_10char("nickname");
	std::cout << std::endl;
	while (i < ph_book->arr_size && i < 8)
	{
		std::cout << std::setw(10) << i << "|";
		print_info(&ph_book->conts[i]);
		std::cout << std::endl;
		i++;
	}
	return (0);
}

int		show_contact_by_index(PhoneBook *ph_book)
{
	std::string str;
	std::cout << "Enter the index[FROM 0 TO 8]\n";	
	std::cin >> str;
	if (str.size() > 1)
		return (error_found("Wrong index input!\n"));
	int i = str.at(0) - 48;
	std::cout << i << std::endl;
	if (i < 8 && i >= 0 && ph_book->arr_size > i)
	{
		std::cout << "First name: " << ph_book->conts[i].get_first_name() << std::endl;
		std::cout << "Last name: " << ph_book->conts[i].get_last_name() << std::endl;
		std::cout << "Nickname: " << ph_book->conts[i].get_nickname() << std::endl;
		std::cout << "Phone number: " << ph_book->conts[i].get_number() << std::endl;
		std::cout << "DARKEST SECRET: " << ph_book->conts[i].get_secret() << std::endl;
	}
	else
		return (error_found("Wrong index\n"));
	return (0);
}

void	funct_ea() {
	Contact myperson("MyNickPerson");
	return ;
}

int		main(void)
{
	std::string cmd;
	PhoneBook ph_book;
	ph_book.arr_size = 0;

	const int size = 8;
	ph_book.conts = new Contact[size];
	while (1)
	{
		std::cin >> cmd;
		if (cmd.compare("ADD") == 0)
			go_add(&ph_book);
		else if (cmd.compare("SEARCH") == 0)
		{
			make_table(&ph_book);
			show_contact_by_index(&ph_book);
		}
		else if (cmd.compare("EXIT") == 0)
			return (go_exit());
		else
			continue ;
	}
	return (0);
}