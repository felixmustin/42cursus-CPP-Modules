#include "Point.hpp"

int main( void ) {
    Point aa(0, 0);
    Point bb(10, 30);
    Point cc(20, 0);
    Point pp(10, 25);

    if (bsp(aa, bb, cc, pp))
        std::cout << "IN" << std::endl;
    else
        std::cout << "OUT" << std::endl;
    return 0;
}