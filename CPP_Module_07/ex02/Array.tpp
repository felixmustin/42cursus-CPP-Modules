#include "Array.hpp"

template <typename T> Array <T>::Array() {
    this->_size = 0;
    this->_arr = NULL;
}


template <typename T> Array <T>::Array(unsigned int n) {
    this->_size = n;
    this->_arr = new T [this->_size];
    for (unsigned int i = 0; i < n; i++)
        this->_arr[i] = 0;
}


template <typename T> Array <T>::Array(const Array<T> &array) {
    *this = array;
}

template <typename T> Array<T> & Array <T>::operator=(const Array<T> &array) {
    if (this == &array)
        return (*this);
    if (this->_size > 0)
        delete [] this->_arr;
    this->_size = array._size;
    this->_arr = new T [this->_size];
    for (unsigned int i = 0; i < this->_size; i++)
        this->_arr[i] = array._arr[i];
    return *this;
}

template <typename T> Array <T>::~Array(void) {
    if (this->_size > 0)
        delete [] this->_arr;
}

template <typename T> unsigned int Array <T>::size() const {
    return (this->_size);
}

template <typename T> T & Array<T>::operator[](unsigned int ind) {
    if (ind >= this->_size)
        throw std::out_of_range("Out of range");
    else
        return (this->_arr[ind]);
}
