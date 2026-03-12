
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

	private: 



	public:

	MutantStack();
	MutantStack(const MutantStack& target);
	MutantStack &operator=(const MutantStack &other);
	~MutantStack();

	typename std::deque<T>::iterator begin();
	typename std::deque<T>::iterator end();
	typedef typename std::deque<T>::iterator iterator;


};

#include "MutantStack.tpp"

#endif