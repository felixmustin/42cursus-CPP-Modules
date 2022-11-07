#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <list>
#include <stack>

class ElemNotFound : public std::exception {
    public:
        virtual const char * what() const throw() {
            return "Element not found in the container";
        }
};

template <class T> typename T::iterator easyfind(T &cont, int i) {
    typename T::iterator iter;
    iter = std::find(cont.begin(), cont.end(), i);
    if (iter == cont.end())
        throw ElemNotFound();
    return iter;
}

#endif