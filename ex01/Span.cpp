#include "Span.hpp"
#include <execption.hpp>


// === CANONICAL FORM === 

Span::Span() : _maxSize(0)
{}

Span::Span(unsigned int maxSize) : _maxSize(maxSize)
{}

Span::Span(const Span &target) : _maxSize(target._maxSize), _nbr(target._nbr)
{}

Span::~Span()
{}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_maxSize = other._maxSize;
		_nbr = other._nbr;
	}

	return (*this);

}

// === METHODE ===


void addNumber(int nbr)
{
	if (_nbr.size() == _maxSize)
	{
		throw std::out_of_range("Container is full !");
	}	
	
	_nbr.pushback(nbr);
}

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