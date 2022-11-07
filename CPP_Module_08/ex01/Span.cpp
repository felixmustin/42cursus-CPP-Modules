#include "Span.hpp"

Span::Span() : _size(0) {
}

Span::Span(unsigned int n) : _size(n) { 
}

Span::Span(const Span &S) : _size(S._size){
    this->_span.clear();
	this->_span = S._span;
}

Span &Span::operator=(const Span& S) {
	this->_size = S._size;
	this->_span.clear();
	this->_span = S._span;
	return (*this);
}

Span::~Span(void) {
}

void Span::addNumber(int num) {
    if (this->_span.size() == _size)
        throw SpanFull();
    else
        this->_span.push_back(num);
}

int Span::shortestSpan(void) const{
    if (this->_span.size() <= 1)
        throw SpanNotEnoughNumbers();
    std::vector<int> sorted_span = this->_span;
    std::sort(sorted_span.begin(), sorted_span.end(), std::less<int>());
    std::vector<const int>::iterator first = sorted_span.begin();
    std::vector<const int>::iterator sec = ++sorted_span.begin();
    int min = *sec - *first;
    while (sec != sorted_span.end()) {
        if (*sec - *first < min)
            min = *sec - *first;
        first = sec;
        sec++;
    }
    return (min);
}

int Span::longestSpan(void) const{
    if (this->_span.size() <= 1)
        throw SpanNotEnoughNumbers();
    std::vector<int> sorted_span = this->_span;
    std::sort(sorted_span.begin(), sorted_span.end(), std::less<int>());

    return (sorted_span.back() - sorted_span.front());
}

void Span::fill(void) {
    unsigned int i;

    srand (time(NULL));
    i = this->_span.size();
    while (i < this->_size) {
        this->_span.push_back(rand() % this->_size + 1);
        i++;
    }
}