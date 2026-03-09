
#include "Span.hpp"


int main ()
{
	std::vector<int> vec;
	
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);


	std::vector<int>::const_iterator it = easyfind(vec, 2);
	std::cout << "Found in vector: " << *it << std::endl;



	try
	{
		easyfind(vec, 6);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	
	std::cout << std::endl;	
	
	// TEST WITH LIST 

	std::list<int> lst;

	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);

	std::list<int>::const_iterator it_lst = easyfind(lst, 3);
	std::cout << "Found in List: "  << *it_lst << std::endl;

	try
	{
		easyfind(vec, -1212);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


}