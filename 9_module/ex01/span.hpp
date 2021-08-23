#ifndef SPAN_HPP
#define SPAN_HPP
#include <string>
#include <vector>
#include <iostream>

class Span
{
private:
	Span();
	int N;
	int cur_N;

public:
	class OutOfSizeException : public std::exception {
		virtual const char* what() const throw ();
	};

	class TooSmallArrayException : public std::exception {
		virtual const char *what() const throw ();
	};

	class TooBigVectorException : public std::exception {
		virtual const char *what() const throw ();
	};

	Span(int N);
	Span(const Span &);
	Span &operator=(const Span &);
	virtual ~Span();


	unsigned int get_n() const;

	template <typename Iterator>
	void	addNumber(Iterator begin, Iterator end) {
		if (end - begin > this->N)
			throw TooBigVectorException();
		else {
			this->cur_N = std::distance(begin, end);
			my_array.assign(begin, end);
		}
	}

	void	addNumber(int number) throw (OutOfSizeException);

	int shortestSpan(void) throw (TooSmallArrayException);
	int longestSpan(void) throw (TooSmallArrayException);

	std::vector<int> my_array;
};





#endif