#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP
#include "Contact.hpp"

class PhoneBook
{

	public:
		int arr_size;
		int	get_arr_size(Contact *);
		Contact *conts;
};

#endif