#pragma once
#include <string>

class Contact
{
	public:
		void set_first_name(std::string);
		std::string get_first_name();
		void set_last_name(std::string);
		std::string get_last_name();
		void set_nickname(std::string);
		std::string get_nickname();

	private:
		std::string first_name;
		std::string last_name;
		std::string nick;
		std::string	num;
		std::string	secret;
};
