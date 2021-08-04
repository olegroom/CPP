#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>
class Contact
{
	public:
		void set_first_name(std::string);
		std::string get_first_name();
		void set_last_name(std::string);
		std::string get_last_name();
		void set_nickname(std::string);
		std::string get_nickname();
		void set_number(std::string);
		std::string get_number();
		void set_secret(std::string);
		std::string get_secret();
		void add_person();
		Contact() {
			first_name = "default";
			std::cout << "I'M CREATED using default constructor" << std::endl;
		}
		Contact(std::string name) {
			first_name = name;
			std::cout << name << std::endl;
		}

		~Contact() {
			std::cout << first_name << " is deleted" << std::endl;
		}

	private:
		int age;
		std::string first_name;
		std::string last_name;
		std::string nick;
		std::string	num;
		std::string	secret;
};

#endif
