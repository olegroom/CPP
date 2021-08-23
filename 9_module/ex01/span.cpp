#include "span.hpp"
#include <vector>
#include <iterator>
#include <numeric>

const char *Span::OutOfSizeException::what() const throw () {
	return ("Error to add extra number");
}

const char *Span::TooSmallArrayException::what() const throw () {
	return ("Too small array to find the span =(");
}

const char *Span::TooBigVectorException::what() const throw () {
	return ("Size you give between iterators is bigger then size of vector you are trying to fill");
}

Span::~Span() {}

Span::Span(int N) : N(N) {
	this->cur_N = 0;
}

Span &Span::operator=(const Span &oth) {
	this->N = oth.N;
	this->cur_N = oth.cur_N;
	this->my_array = oth.my_array;
	return (*this);
}

Span::Span(const Span &oth) {
	*this = oth;
}


void Span::addNumber(int number) throw (OutOfSizeException) {
	if (this->N > 0 && this->cur_N != this->N) {
		my_array.push_back(number);
		this->cur_N++;
	}
	else
		throw OutOfSizeException();
}

int		Span::shortestSpan(void) throw (TooSmallArrayException) {
	int res = 0;
	if (this->cur_N >= 2) {
		std::vector<int> local_array;
		local_array.assign(my_array.begin(), my_array.end());

		std::sort(local_array.begin(), local_array.end());
		std::adjacent_difference(local_array.begin(), local_array.end(), local_array.begin());
		res = *(std::min_element(local_array.begin() + 1, local_array.end()));
	}
	else {
		throw TooSmallArrayException();
	}
	return (res);
}

int		Span::longestSpan(void) throw (TooSmallArrayException) {
	int res = 0;
	if (this->cur_N >= 2)
		res = *(std::max_element(my_array.begin(), my_array.end())) - *(std::min_element(my_array.begin(), my_array.end()));
	else
		throw TooSmallArrayException();
	return (res);
}

unsigned int Span::get_n() const {
	return (this->N);
}
