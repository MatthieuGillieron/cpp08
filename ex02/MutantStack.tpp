
template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &target) : std::stack<T>(target)
{} 

template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &other)
{
	std::stack<T>::operator=(other);
	return *this;
}

