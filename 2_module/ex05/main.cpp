#include "Karen.hpp"

int		main(void) {
	Karen kr1;

	kr1.complain("ERROR");
	kr1.complain("DEBUG");
	kr1.complain("WARNING");
	kr1.complain("ERROR");
	kr1.complain("WARNING");
	kr1.complain("WARNING");
	kr1.complain("DEBUG");
	kr1.complain("INFO");
	kr1.complain("INFO");
	return (0);
}