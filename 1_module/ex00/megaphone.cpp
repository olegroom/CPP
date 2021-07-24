#include <iostream>
#include <cstring>

int		main(int ac, char **av)
{
	int	i;

	i = 0;
	std::string str;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (++i < ac)
			str += av[i];
	for (i = 0; i < (int)str.length(); ++i)
		putchar(toupper(str[i]));
	std::cout << std::endl;
	return (0);

}