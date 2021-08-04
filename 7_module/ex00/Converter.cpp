#include "Converter.hpp"

Converter::Converter(std::string const &str)
{
	this->str = str;
	this->value_type = 'n';
}

int			Converter::start_pars() {
	try
	{
		if (this->str.size() == 1 && !isdigit(this->str[0]))
		{
			std::cout << "char: " << str[0] << std::endl;
			std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
			std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
			return (0);
		}
		else
			test = std::stof(str);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Converter::toChar(test);

	ivalue = Converter::toInt(test);
	std::cout << "int: ";
	if (ivalue == std::numeric_limits<int>::min() || ivalue == std::numeric_limits<int>::max() || std::isnan(test))
		std::cout << "impossible" << std::endl;
	else
		std::cout << ivalue << std::endl;


	fvalue = Converter::toFloat(test);
	std::cout << "float: " << fvalue;
	if (test - (int)test != (float)0)
		std::cout << "f" << std::endl;
	else
		std::cout << ".0f" << std::endl;

	dvalue = Converter::toDouble(test);
	std::cout << "double: " << dvalue;
	if (dvalue - (int)dvalue == (double)0)
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;
	return (0);
}

int			Converter::toInt(float x) {
	return (static_cast<int>(x));
}

float		Converter::toFloat(float x) {
		return (static_cast<float>(x));
}

double		Converter::toDouble(float x) {
	return (static_cast<double>(x));
}

void		Converter::toChar(float x) {
	std::cout << "char: ";
	this->cvalue = static_cast<char>(x);
	if (x == std::numeric_limits<float>::infinity() || x == -std::numeric_limits<float>::infinity() || std::isnan(x))
		std::cout << "impossible" << std::endl;
	else if ((int)x < 32)
		std::cout << "Non displayable" << std::endl;
	else if ((int)x > 126 || (int)x < 0)
		std::cout << "impossible" << std::endl;
	else
		std::cout << '\'' << this->cvalue << '\'' << std::endl;
}

Converter::~Converter()
{
}
