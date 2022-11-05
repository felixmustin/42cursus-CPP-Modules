#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T> void iter (T *tab, size_t len, void (*func)(T &elem)) {
    for (size_t i = 0; i < len; i++)
        (*func)(tab[i]);
}

template <typename T> void display(T & elem) {
	std::cout << elem << std::endl;
}

#endif