#include "iter.hpp"

int main( void )
{
    int int_tab[] = {1, 2, 3, 4};
    std::string str_tab[] = {"salut", "yo", "wesh"};

    ::iter(int_tab, 4, &display);
    ::iter(str_tab, 3, &display);
}