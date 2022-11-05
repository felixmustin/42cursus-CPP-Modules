#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include "stdexcept"

template <class T> class Array {
private:
    T* _arr;
    unsigned int _size;
public:

    Array();
    Array(unsigned int n);
    Array(const Array &);
    Array &operator=(const Array&);
    ~Array(void);

    unsigned int size (void) const;
    T & operator[](unsigned int ind);
};

#include "Array.tpp"

#endif