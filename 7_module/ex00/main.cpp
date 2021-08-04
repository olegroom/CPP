#include "Converter.hpp"

int		error_found(std::string const &strerror) {
	std::cerr << strerror << std::endl;
	return (-1);
}

int		main(int argc, char **argv) {
	if (argc != 2)
		return (error_found("Wrong number of arguments"));
	else
	{
		Converter conv(argv[1]);
		if (conv.start_pars() == -1)
			return (error_found("Wrong input data"));
	}
	return (0);
}