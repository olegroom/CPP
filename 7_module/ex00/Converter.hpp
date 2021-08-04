#ifndef CONVERTER_HPP
#define CONVERTER_HPP
#include <string>
#include <iostream>
#include <limits>
# include <cmath>


class Converter
{
private:
	Converter(/* args */);

public:
	char		value_type; //c - char, i - int, d - double, f - float, n - non of all
	float		fvalue;
	double		dvalue;
	int			ivalue;
	char		cvalue;
	std::string str;

	float		test;


	int				start_pars();
	int				find_source_type();


	int		toInt(float);
	float	toFloat(float);
	double	toDouble(float);
	void	toChar(float);

	Converter(std::string const &str);
	Converter(const Converter &other);
	Converter &operator=(const Converter &other);
	virtual ~Converter();
};

#endif