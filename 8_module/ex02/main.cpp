#include <string>
#include <iostream>
#include "Array.hpp"
#define MAX_VAL 750

template <typename T>
Array<T>::Array()
{
	ar = nullptr;
	this->n = 0;
}

template <typename T>
Array<T>::~Array()
{
	if (this->ar != nullptr)
		delete[] this->ar;
}

template <typename T>
Array<T>::Array(int n) {
	this->n = n;
	this->ar = new T[n];
	for (int i = 0; i < n; i++)
		ar[i] = 0;
}

template <typename T>
Array<T>::Array(Array<T> const &othr) {
	if (othr.n == 0)
		this->ar = nullptr;
	else
		this->ar = new T[othr.n];
	this->n = othr.n;
	for (int i = 0; i < othr.n; i++)
		this->ar[i] = othr.ar[i];
}

template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw() {
	return ("Out of bounds exception");
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &othr) {
	if (this == othr)
		return (*this);
	if (othr.n == 0)
		this->ar = nullptr;
	else
		this->ar = new T[othr.n];
	this->n = othr.n;
	for (int i = 0; i < othr.n; i++)
		this->ar[i] = othr.ar[i];
	return (*this);
}

template <typename T>
T& Array<T>::operator[](int indx) {
	if (indx >= this->n)
		throw Array::OutOfBoundsException();
	return (this->ar[indx]);
}

template <typename T>
T const &Array<T>::operator[](int &indx) const {
	return (operator[](indx));
}

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}