#include "mutantstack.hpp"
#include <stack>

int		main(void) {
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "value on stack top " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "#" << *it << std::endl;
		++it;
	}
	std::cout << "size " << mstack.size() << std::endl;
	std::stack<int> other_s(mstack);
	MutantStack<int> s(mstack);

	std::cout << "\n\n";
	std::cout << "S size " << s.size() << std::endl;
	for (int i = 0 ; i < 5000 ; i++)
		s.push(i);
	std::cout << "S size " << s.size() << std::endl;
	std::cout << "TOP in S " << s.top() << std::endl;
	for (int i = 0 ; i < 2000; i++ )
		s.pop();
	std::cout << "S size " << s.size() << std::endl;
	MutantStack<int>::iterator begIT = s.begin();
	std::cout << *begIT << std::endl;
	
	return 0;
}