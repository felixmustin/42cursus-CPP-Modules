#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdexcept>
#include <vector>

class Span {
private:
    std::vector<int> _span;
    unsigned int _size;
public:
    Span();
    Span(unsigned int n);
    Span(const Span &);
    Span &operator=(const Span&);
    ~Span();

    void addNumber(int num);
    int shortestSpan(void) const;
    int longestSpan(void) const;

    void fill(void);
};

class SpanFull : public std::exception {
    public:
        virtual const char * what() const throw() {
            return "Span is alredy full";
        }
};

class SpanNotEnoughNumbers : public std::exception {
    public:
        virtual const char * what() const throw() {
            return "Not enough nomber in span to find a difference";
        }
};

#endif