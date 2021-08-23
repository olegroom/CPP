#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

template <typename T>
int		easyfind(T far, int sar) {
	typename T::iterator iter = std::find(far.begin(), far.end(), sar);
	return(iter != far.end() ? *iter : -1);
}

int		main(void) {
	std::vector<int> my_vector;
	std::list<int> my_list;
	int g;

	//vector --> should output 2
	for (size_t i = 0; i < 5; i++)
		my_vector.push_back(i);
	g = easyfind(my_vector, 2);
	if (g == -1)
		std::cout << "Int wasn't found" << std::endl;
	else
		std::cout << g << std::endl;

	//list --> should output "Int wasn't found"
	for (size_t i = 0; i < 10; i++)
		my_list.push_back(i * 2);
	g = easyfind(my_list, 15);
	if (g == -1)
		std::cout << "Int wasn't found" << std::endl;
	else
		std::cout << g << std::endl;
	
	return (0);
}