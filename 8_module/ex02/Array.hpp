#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
private:
public:
	T *ar;
	int n;

	Array();
	Array(int n);
	Array(Array<T> const &);
	Array &operator=(Array<T> const &);
	~Array();
	T& operator[](int indx);
	T const &operator[](int &indx) const;

	class OutOfBoundsException : public std::exception {
		virtual const char *what () const throw();
	};
};

#endif