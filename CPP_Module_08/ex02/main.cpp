#include "MutantStack.hpp"
#include <list>

int main(void) {

    std::cout << "MUTANTSTACK" << std::endl;

    MutantStack<int> ms;

    ms.push(5);
    ms.push(17);

    std::cout << "top : " << ms.top() << std::endl;

    ms.pop();

    std::cout << "top : " << ms.top() << std::endl;
    std::cout << "size : " << ms.size() << std::endl;

    ms.push(3);
    ms.push(5);
    ms.push(42);
    ms.push(737);

    std::cout << "\nIterator" << std::endl;
    MutantStack<int>::iterator it = ms.begin();
    MutantStack<int>::iterator ite = ms.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "Reverse iterator" << std::endl;
    MutantStack<int>::reverse_iterator itr = ms.rbegin();
    MutantStack<int>::reverse_iterator iter = ms.rend();
    ++itr;
    --itr;
    while (itr != iter) {
        std::cout << *itr << std::endl;
        ++itr;
    }

    std::cout << "----------------------------------------------------------" << std::endl;

    MutantStack<int> ms_copy;
    ms_copy = ms;
    MutantStack<int> ms_copy2(ms_copy);

    std::cout << "\nIterator for copies" << std::endl;
    MutantStack<int>::iterator itc = ms_copy.begin();
    MutantStack<int>::iterator itec = ms_copy.end();
    ++itc;
    --itc;
    while (itc != itec) {
        std::cout << *itc << std::endl;
        ++itc;
    }
    MutantStack<int>::iterator itc2 = ms_copy2.begin();
    MutantStack<int>::iterator itec2 = ms_copy2.end();
    ++itc2;
    --itc2;
    while (itc2 != itec2) {
        std::cout << *itc2 << std::endl;
        ++itc2;
    }

    std::cout << "----------------------------------------------------------" << std::endl;

    std::cout << "\nLIST" << std::endl;

    std::list<int> list;

    list.push_back(5);
    list.push_back(17);

    std::cout << "back : " << list.back() << std::endl;

    list.pop_back();

    std::cout << "top : " << list.back() << std::endl;
    std::cout << "size : " << list.size() << std::endl;

    list.push_back(3);
    list.push_back(5);
    list.push_back(42);
    list.push_back(737);

    std::cout << "\nIterator" << std::endl;
    std::list<int>::iterator itl = list.begin();
    std::list<int>::iterator itel = list.end();
    ++itl;
    --itl;
    while (itl != itel) {
        std::cout << *itl << std::endl;
        ++itl;
    }
}