#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

template <typename T> class MutantStack : public std::stack<T> {
public:
    MutantStack(void);
    MutantStack(const MutantStack<T>& M);
    ~MutantStack(void);
    MutantStack<T> &operator=(const MutantStack<T> & M);

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    iterator begin();
    iterator end();
    const_iterator cbegin() const;
    const_iterator cend() const;
    reverse_iterator rbegin();
    reverse_iterator rend();
    const_reverse_iterator crbegin() const;
    const_reverse_iterator crend() const;
};

template <typename T> MutantStack<T>::MutantStack(void) {}

template <typename T> MutantStack<T>::~MutantStack(void) {}

template <typename T> MutantStack<T>::MutantStack(const MutantStack<T>& M) {
    *this = M;
}

template <typename T> MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T> & M) {
    if (*this != M)
        this->c = M.c;
    return *this;
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return this->c.begin();
}
template <typename T> typename MutantStack<T>::iterator MutantStack<T>::end() {
    return this->c.end();
}

template <typename T> typename  MutantStack<T>::const_iterator MutantStack<T>::cbegin() const {
    return this->c.cbegin();
}
template <typename T> typename MutantStack<T>::const_iterator MutantStack<T>::cend() const {
    return this->c.cend();
}

template <typename T> typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {
    return this->c.rbegin();
}
template <typename T> typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {
    return this->c.rend();
}

template <typename T> typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() const {
    return this->c.crbegin();
}
template <typename T> typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend() const {
    return this->c.crend();
}



#endif
