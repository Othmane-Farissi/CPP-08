#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& toSearchIn, int toFind)
{
    typename T::iterator it = std::find(toSearchIn.begin(), toSearchIn.end(), toFind);
    return it;
}

#endif
