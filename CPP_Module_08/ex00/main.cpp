#include "easyfind.hpp"

int main(void) {

    std::vector<int> cont;

    cont.push_back(1);
    cont.push_back(2);
    cont.push_back(3);

    try {
       std::vector<int>::iterator ret1 = easyfind(cont, 3);
       std::cout << *ret1 << std::endl;
       std::vector<int>::iterator ret2 = easyfind(cont, 4);
       std::cout << *ret2 << std::endl;
    }
    catch(const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    /*--------------------------------------------------------*/

    std::list<int> lst;

    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);

    try {
       std::list<int>::iterator ret1 = easyfind(lst, 2);
       std::cout << *ret1 << std::endl;
       std::list<int>::iterator ret2 = easyfind(lst, -2);
       std::cout << *ret2 << std::endl;
    }
    catch(const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}