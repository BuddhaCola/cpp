// #include "MutantStack.hpp"
#include <stack>
#include <iterator>
#include <iostream>
template <typename T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::iterator const_iterator;
	typedef typename std::stack<T>::container_type::iterator const_reverse_iterator;

	iterator begin() {
		return this->c.begin();
	}
	reverse_iterator end() {
		return this->c.end();
	}
	const_iterator rbegin() {
		return this->c.rbegin();
	}
	const_reverse_iterator cend() {
		return this->c.cend();
	}
};

int main () {
	MutantStack<char> stack;
	for (size_t i = 0; i < 10; i++)
	{
		stack.push(i + 'A');
	}
	// MutantStack<char>::iterator i(stack.begin());
	// while (*i != *stack.end()) {
	// 	std::cout << *i << std::endl;
	// 	i++;
	// }
	MutantStack<char>::reverse_iterator ri(stack.end());
	while (*ri != *stack.rbegin())
	{
		std::cout << *ri << std::endl;
		ri++;
	}
}

// #include <iostream>
// #include <stack>
// int main () {
// 	// MutantStack<int>    mstack;
// 	for (size_t i = 0; i < 10; i++)
// 	{
// 		mstack.push(i);
// 	}
// 	MutantStack<int>::iterator it = mstack.cbegin();
// 	// MutantStack<int>::iterator ite = mstack.cend();
// 	++it;
// 	// --it;
// 	// while(it != ite) {
// 	// 	std::cout << *it << std::endl;
// 	// 	++it;
// 	// }
// 	return 0;
// }