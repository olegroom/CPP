#pragma once
#include "Contact.hpp"

class PhoneBook
{

	public:
		int arr_size;
		int	get_arr_size(Contact *);
		Contact *conts;
};