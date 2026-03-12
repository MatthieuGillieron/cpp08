#include <vector>
#include <list>
#include <iostream>
#include <iterator>
#include "MutantStack.hpp"

int main()
{


	std::cout << " === Subjetc test ===" << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
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
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	
	
	std::cout << std::endl;
	std::cout << " === List test ===" << std::endl;

	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << lst.back() << std::endl;
	lst.pop_back();
	std::cout << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);

	std::list<int>::iterator it_lst = lst.begin();
	std::list<int>::iterator ite_lst = lst.end();
	++it_lst;
	--it_lst;
	while(it_lst != ite_lst)
	{
		std::cout << *it_lst << std::endl;
		++it_lst;
	}
}

// .push(42);    // ajoute au dessus
// .pop();       // enlève le dessus
// .top();       // regarde le dessus
// .size();      // nombre d'éléments
// .empty();     // true si vide


// std::vector<int> vec;
// vec.push_back(1);
// vec.push_back(2);
// vec.push_back(3);
// vec.push_back(4);

// std::vector<int>::iterator it;

// for (it = vec.begin(); it != vec.end(); it++)
// {
// 	std::cout << *it << std::endl;
// }