#include <iostream>
#include <string>

struct Data
{
	std::string str;
	int			n;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

uintptr_t serialize(Data* ptr) {
	uintptr_t retValue = reinterpret_cast<uintptr_t>(ptr);
	return (retValue);
}

Data* deserialize(uintptr_t raw) {
	Data *retType = reinterpret_cast<Data *>(raw);
	return (retType);
}


int		main(void) {
	Data *dptr1 = new Data;
	std::cout << "Begin address of dptr:	" << dptr1 << std::endl;
	uintptr_t raw = serialize(dptr1);
	std::cout << "Raw integer is: " << raw << std::endl;
	Data *dptr2 = deserialize(raw);
	std::cout << "End address of dptr:	" << dptr2 << std::endl;
	return (0);
}