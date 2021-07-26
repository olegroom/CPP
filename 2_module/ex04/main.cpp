#include <iostream>
#include <string>
#include <fstream>

int		error_found(std::string str) {
	std::cout << str << std::endl;
	return (1);
}

std::string	replace_in_line(std::string cur_line, std::string search, std::string replace) {
	int index;

	while ((index = cur_line.find(search)) != -1)
		cur_line.replace(index, search.size(), replace);
	return (cur_line);
}

int		main(int ac, char **av) {
	if (ac != 4)
		return (error_found("Wrong number of args"));
	if (!av[1] || !av[2])
		return (error_found("Put s1 and s2 not as empty strings"));

	std::string s1 = av[1];
	std::string s2 = av[2];
	std::string file = av[3];
	std::string cur_line;

	std::ifstream ifs(file);
	if (ifs.is_open() == false)
		return (error_found("Cannot open " + file));
	std::ofstream ofs(file + ".replace", std::ofstream::trunc & std::ofstream::app);
	if (ofs.is_open() == false)
		return (error_found("Cannot open " + file + ".replace"));

	while (getline(ifs, cur_line))
	{
		ofs << replace_in_line(cur_line, s1, s2);
		if (ifs.eof() == false)
			ofs << '\n';
	}
	if (ifs.is_open() == true)
		ifs.close();
	if (ofs.is_open() == true)
		ofs.close();
	return (0);
}