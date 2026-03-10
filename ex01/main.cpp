
#include "Span.hpp"



int main ()
{

	Span sp(5);

	sp.addNumber(1);
	sp.addNumber(2);
	sp.addNumber(4);
	sp.addNumber(6);
	sp.addNumber(7);

	std::cout << "longest gap: " << sp.longestSpan() << std::endl;
	std::cout << "shortest gap: " << sp.shortestSpan() << std::endl;

	try
	{
		sp.addNumber(8);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	return 0;
}