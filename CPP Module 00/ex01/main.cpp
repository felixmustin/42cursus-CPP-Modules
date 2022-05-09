#include <iostream>
#include <string>
#include <stdio.h>
#include "PhoneBook.hpp"

int main(void) {

    PhoneBook myBook;
    std::string cmd;
	int i;
    bool val;

    val = true;
    while (val)
    {
        std::cout << ">>";
        std::getline(std::cin, cmd);
        if (cmd == "ADD") {
            myBook.addContact();
        }
        else if (cmd == "SEARCH") {
            myBook.showBook();
		    std::cin >> i;
		    if (std::cin.eof())
			    exit(1);
            if (i <= 8)
                myBook.displayDetails(i);
        }
        else if (cmd == "EXIT") {
            std::cout << ".." << std::endl;
            val = false;
        }
        else
            val = false;
    }
    return (0);
}