#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <stdexcept>
#include <algorithm>
#include <vector>
#include <iostream>


template <typename T>
typename T::const_iterator easyfind(const T &container, int target);

#include "easyfind.tpp"

#endif