
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

			void addNumber();
			int shortestSpan();
			int longestSpan();

};



#endif