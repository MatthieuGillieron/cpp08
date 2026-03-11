
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


class Span
{

	private:

			unsigned int _maxSize;
			std::vector<int> _nbr;


	public:

			Span();
			Span(unsigned int N);
			Span(const Span &target);
			~Span();

			Span& operator=(const Span &other);

			template <typename T>
			void addListNumber(T begin, T end);
			void addNumber(int nbr);
			int shortestSpan();
			int longestSpan();

};

template <typename T>
void Span::addListNumber(T begin, T end)
{
	_nbr.insert(_nbr.end(), begin, end);
}


#endif