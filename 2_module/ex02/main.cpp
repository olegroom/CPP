#include <string>
#include <iostream>

int		main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "String address: " << &str << std::endl;
	std::cout << "String address: " << stringPTR << std::endl;
	std::cout << "String address: " << &stringREF << std::endl;

	std::cout << "String: " << *stringPTR << std::endl;
	std::cout << "String: " << stringREF << std::endl;

	return (0);
}