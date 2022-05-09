#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include "Contact.hpp"
#include <iostream>
#include <iomanip> 

class PhoneBook {

private:
    int _index;
    Contact _list_contact[8];
    void _showContact(int i);
    std::string _formated_print(std::string str);
    Contact _addData();
public:
    PhoneBook(void);
    ~PhoneBook(void);
    void addContact();
    void showBook();
    void displayDetails(int i);
};

#endif