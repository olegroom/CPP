#include "Fixed.hpp"
#include <iostream>

int	main(void) {
	Fixed f1;
	Fixed const f2( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << f1 << std::endl;
	std::cout << ++f1 << std::endl;
	std::cout << f1 << std::endl;
	std::cout << f1++ << std::endl;
	std::cout << f1 << std::endl;

	std::cout << f2 << std::endl;
	
	std::cout << Fixed::max( f1, f2 ) << std::endl;
	return 0;
}