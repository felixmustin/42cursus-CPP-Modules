#include "Base.hpp"

Base* generate(void) {
    Base *base = NULL;
    int rand_int = -1;

    srand(time(NULL));
    rand_int = rand() % 3;
    switch (rand_int) {
        case 0:
            base = new A();
            break;
        case 1:
            base = new B();
            break;
        case 2:
            base = new C();
            break;
    }
    return base;
}

void identify(Base& p) {
try {
    (void) dynamic_cast<A &>(p);
    std::cout << "(2) Object's type is A" << std::endl;
    return ;
}
catch(std::exception& ex) {}

try {
    (void) dynamic_cast<B &>(p);
    std::cout << "(2) Object's type is B" << std::endl;
    return ;
}
catch(std::exception& ex) {}

try {
    (void) dynamic_cast<C &>(p);
    std::cout << "(2) Object's type is C" << std::endl;
    return ;
}
catch(std::exception& ex) {}
}

void identify(Base* p) {
A* a = dynamic_cast<A*>(p);
if (a) {
    std::cout << "(1) Object's type is A" << std::endl;
    return ;
}
B* b = dynamic_cast<B*>(p);
if (b) {
    std::cout << "(1) Object's type is B" << std::endl;
    return ;
}
C* c = dynamic_cast<C*>(p);
if (c) {
    std::cout << "(1) Object's type is C" << std::endl;
    return ;
}
}

int main(void) {
    Base *base;

    base = generate();
    identify(base);
    std::cout << "-------------" << std::endl;
    identify (*base);
}