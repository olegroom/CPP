#include "Contact.hpp"
#include <string>
#include <iostream>

void Contact::set_first_name(std::string first_n)
{
	Contact::first_name = first_n;
}

std::string Contact::get_first_name()
{
	return (Contact::first_name);
}

void Contact::set_last_name(std::string last_n)
{
	Contact::last_name = last_n;
}

std::string Contact::get_last_name()
{
	return (Contact::last_name);
}

void Contact::set_nickname(std::string nick)
{
	Contact::nick = nick;
}

std::string Contact::get_nickname()
{
	return (Contact::nick);
}

void Contact::set_number(std::string num)
{
	Contact::num = num;
}

std::string Contact::get_number()
{
	return (Contact::num);
}

void Contact::set_secret(std::string secret)
{
	Contact::secret = secret;
}

std::string Contact::get_secret()
{
	return (Contact::secret);
}