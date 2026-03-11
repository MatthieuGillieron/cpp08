
#include "Span.hpp"



int main ()
{


	std::cout << " === [1] Classsic test ===" << std::endl;

	Span sp(5);

	sp.addNumber(1);
	sp.addNumber(2);
	sp.addNumber(4);
	sp.addNumber(6);
	sp.addNumber(7);

	std::cout << "longest gap: " << sp.longestSpan() << std::endl;
	std::cout << "shortest gap: " << sp.shortestSpan() << std::endl;



	std::cout << std::endl;
	std::cout << " === [2] Exception test | Full ===" << std::endl;

	try
	{
		sp.addNumber(8);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}



	std::cout << std::endl;
	std::cout << " === [3] Exception test | Empty ===" << std::endl;


	Span sp1(5);
	try
	{
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	



	std::cout << std::endl;
	std::cout << " === [4] Range of iterator test ===" << std::endl;


	Span sp2(5);
	
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(4);
	vec.push_back(11);

	sp2.addListNumber(vec.begin(), vec.end());
	std::cout << "Shortest: " << sp2.shortestSpan() << std::endl;
	std::cout << "Longtest: " << sp2.longestSpan() << std::endl;
	




	std::cout << std::endl;
	std::cout << " === [5] 10k number test ===" << std::endl;
	
	Span sp3(10000);
	std::vector<int> vec1;

	for (unsigned int i = 0; i < 10000; i++)
		vec1.push_back(i);
	
	sp3.addListNumber(vec1.begin(), vec1.end());
	std::cout << "Shortest: " << sp3.shortestSpan() << std::endl;
	std::cout << "Longtest: " << sp3.longestSpan() << std::endl;

	return 0;
}