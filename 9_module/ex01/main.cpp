#include "span.hpp"

int main()
{
	std::cout << "Simple test" << std::endl;
	Span sp(5);
	// Span sp;
	Span sp1(400);
	try {
		sp.addNumber(10);
		sp.addNumber(29);
		sp.addNumber(2);
		sp.addNumber(48);
		sp.addNumber(18);
		// sp.addNumber(45);
		// sp.addNumber(333);
		// sp.addNumber(338);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Span sec_sp(15000);
	sec_sp.addNumber(453);
	sec_sp.addNumber(33);
	
	std::cout << std::endl << "test with 50000 numbers" << std::endl;
	Span sp_long_long(50000);
    std::vector<int> range(50000, 60);
    range[3256] = 40;
	try
	{
    	sp_long_long.addNumber(range.begin(), range.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

    try
    {
        std::cout << sp_long_long.longestSpan() << std::endl;
    }
        catch(const std::exception& e)
    {
        std::cerr << "Error : " << e.what() <<  std::endl;
    }

    try
    {
        std::cout << sp_long_long.shortestSpan() << std::endl;
    }
        catch(const std::exception& e)
    {
        std::cerr << "Error : " << e.what() <<  std::endl;
    }

	return (0);
}