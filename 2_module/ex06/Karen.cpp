#include "Karen.hpp"

void	Karen::debug() {
	std::cout << "DEBUG I love to get a big cars" << std::endl;
}

void	Karen::info() {
	std::cout << "INFO I am hungry" << std::endl;
}

void	Karen::warning() {
	std::cout << "WARNING You should think better" << std::endl;
}

void	Karen::error() {
	std::cout << "ERROR Do cars cost money?" << std::endl;
}

void	Karen::complain(std::string level) {

	int number = -1;

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

	int i = -1;
	while (++i < 4)
		if (complains[i].compare(level) == 0)
		{
			number = i;
			break;
		}

	switch (number)
	{
	case 0:
		for (size_t i = 0; i < 4; i++)
			(this->*funcptr[i])();
		break;
	case 1:
		for (size_t i = 1; i < 4; i++)
			(this->*funcptr[i])();
		break;
	case 2:
		for (size_t i = 2; i < 4; i++)
			(this->*funcptr[i])();
		break;
	case 3:
		for (size_t i = 3; i < 4; i++)
			(this->*funcptr[i])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}