#include "Span.hpp"


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


void Span::addNumber(int nbr)
{
	if (_nbr.size() == _maxSize)
	{
		throw std::out_of_range("Container is full !");
	}	
	
	_nbr.push_back(nbr);
}

int Span::shortestSpan()
{
	
	if (_nbr.size() < 2)
	{
		throw std::out_of_range("Need to element for compare");
	}

	std::sort(_nbr.begin(), _nbr.end());
	
	int shortest = _nbr[1] - _nbr[0];
	
	for (unsigned int i = 1; i < _nbr.size(); i++)
	{
		int buffer = _nbr[i] - _nbr[i -1];
		if (buffer < shortest)
			shortest = buffer;
	}

	return (shortest);
}


 int Span::longestSpan()
{
	if (_nbr.size() < 2)
	{
		throw std::out_of_range("Need to element for compare");
	}

	int min = *std::min_element(_nbr.begin(), _nbr.end());
	int max = *std::max_element(_nbr.begin(), _nbr.end());

	return (max - min);
}