#include "Karen.hpp"

void	Karen::debug() {
	std::cout << "I love to get a big cars" << std::endl;
}

void	Karen::info() {
	std::cout << "I am hungry" << std::endl;
}

void	Karen::warning() {
	std::cout << "You should think better" << std::endl;
}

void	Karen::error() {
	std::cout << "Do cars cost money?" << std::endl;
}

void	Karen::complain(std::string level) {
	std::string complains[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void (Karen::*funcptr[4])() = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error,
	};

	for (size_t i = 0; i < 4; i++)
		if (complains[i].compare(level) == 0)
			(this->*funcptr[i])();
}