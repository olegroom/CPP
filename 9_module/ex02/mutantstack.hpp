#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iostream>
#include <vector>

// template <typename T>
// class MutantStack;

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;


	iterator begin(void) {
		return (std::stack<T>::c.begin());
	}

	const_iterator begin(void) const{
		return (std::stack<T>::c.begin());
	}
	reverse_iterator rbegin(void) {
		return (std::stack<T>::c.rbegin());
	}
	const_reverse_iterator rbegin(void) const {
		return (std::stack<T>::c.rbegin());
	}
	//-----------------------------------------------------------------------------------------------
	iterator end(void) {
		return (std::stack<T>::c.end());
	}

	const_iterator end(void) const{
		return (std::stack<T>::c.end());
	}
	reverse_iterator rend(void) {
		return (std::stack<T>::c.rend());
	}
	const_reverse_iterator rend(void) const {
		return (std::stack<T>::c.rend());
	}
	MutantStack(): std::stack<T>() {}
	~MutantStack() {}
	MutantStack(const MutantStack<T>& other):std::stack<T>(other) {}
	MutantStack<T> &operator=(const MutantStack<T> &other) { this->d = other.d; return (*this); }
};

#endif