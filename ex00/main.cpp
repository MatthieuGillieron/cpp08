
#include "easyfind.hpp"


int main ()
{
	std::vector<int> vec;
	
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);



	std::vector<int>::const_iterator it = easyfind(vec, 2);
	std::cout << "Found: " << *it << std::endl;



	try
	{
		easyfind(vec, 6);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	
}