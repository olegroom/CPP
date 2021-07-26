#include <iostream>
#include <string>
#include <fstream>

int		error_found(std::string str) {
	std::cout << str << std::endl;
	return (1);
}

std::string	replace_in_line(std::string cur_line, std::string search, std::string replace){
	std::string new_line;
	std::string cur_word;
	int i = 0;
	int j;
	while (cur_line[i] != '\0')
	{
		while (cur_line[i] == ' ')
		{
			new_line += " ";
			i++;
		}
		j = 0;
		while (cur_line[i] != ' ' && cur_line[i] != '\0')
		{
			i++;
			j++;
		}
		cur_word = cur_line.substr(i - j, j);
		if (cur_word.compare(search) == 0)
			new_line += replace;
		else
			new_line += cur_word;
	}
	return (new_line);
}

int		main(int ac, char **av) {
	if (ac != 4)
		return (error_found("Wrong number of args"));

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
	ifs.close();
	ofs.close();

	return (0);
}