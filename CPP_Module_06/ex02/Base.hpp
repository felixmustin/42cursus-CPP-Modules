#ifndef BASE_HPP
# define BASE_HPP

#include <string>
#include <iostream>

class Base {
private:

public:
    virtual ~Base(void);
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};


#endif