#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iterator>


template <typename T>
class MutantStack : public std::stack<T> {
public:
	typedef std::stack<T>std::iterator iterator;
// 	typedef std::stack<T>std::iterator iterator;
};

#endif // !MUTANTSTACK_HPP