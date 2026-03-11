
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
	~MutantStack();
	
	MutantStack &operator=(const MutantStack &other);

};

#include "MutantStack.tpp"

#endif