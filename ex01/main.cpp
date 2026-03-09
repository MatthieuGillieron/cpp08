
#include "Span.hpp"


int shortestSpan(std::vector<int> vec)
{
	
	
	std::sort(vec.begin(), vec.end());
	
	int shortest = vec[1] - vec[0];
	
	for (int i = 1; i < vec.size(); i++)
	{
		int buffer = vec[i] - vec[i -1];
		if (buffer < shortest)
			shortest = buffer;
	}

	return (shortest);
}


 int longestSpan(std::vector<int> vec)
{
	int min = *std::min_element(vec.begin(), vec.end());
	int max = *std::max_element(vec.begin(), vec.end());

	return (max - min);
}



int main ()
{
	std::vector<int> vec(10);

	
}