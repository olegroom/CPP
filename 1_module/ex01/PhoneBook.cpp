#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	PhoneBook::get_arr_size(Contact *conts)
{
	
	int i = 0;
	while(conts[i].get_first_name().compare("1") != 0)
		i++;
	return (i);
}