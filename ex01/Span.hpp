
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

			void addNumber(int nbr);
			int shortestSpan();
			int longestSpan();

};



#endif