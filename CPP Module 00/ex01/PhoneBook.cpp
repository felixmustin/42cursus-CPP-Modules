#include "PhoneBook.hpp"


PhoneBook::PhoneBook(void) {
    this->_index = 0;
}

PhoneBook::~PhoneBook(void) {   
}

void PhoneBook::addContact() {
    if (this->_index <= 7) {
        this->_list_contact[this->_index] = _addData();
    }
    else {
        this->_index = 0;
        this->_list_contact[this->_index] = _addData();
    }
    this->_index++;
}

Contact PhoneBook::_addData() {
    Contact contact;
    std::string fname;
	std::string lname;
	std::string nick;
	std::string num;
	std::string secret;

    std::cout << "First name : " << std::endl;
    std::getline(std::cin, fname);
    if (fname.empty())
		exit(1);
    else
        contact.setFname(fname);

    std::cout << "Last name : " << std::endl;
    std::getline(std::cin, lname);
    if (lname.empty())
		exit(1);
    else
        contact.setLname(lname);
    
    std::cout << "Nickname : " << std::endl;
    std::getline(std::cin, nick);
    if (nick.empty())
		exit(1);
    else
        contact.setNick(nick);

    std::cout << "Phone number : " << std::endl;
    std::getline(std::cin, num);
    if (num.empty())
		exit(1);
    else
        contact.setNum(num);
    std::cout << "Darkest secret : " << std::endl;
    std::getline(std::cin, secret);
    if (secret.empty())
		exit(1);
    else
        contact.setSecret(secret);
    return contact;
}

void PhoneBook::showBook() {
    int i;

    for (i=0; i<this->_index; i++) {
        _showContact(i);
    }
}

void PhoneBook::_showContact(int i) {
    std::cout << " | " << std::setw(10) << i;
    std::cout << " | " << std::setw(10) << _formated_print(this->_list_contact[i].getFname());
    std::cout << " | " << std::setw(10) << _formated_print(this->_list_contact[i].getLname());
    std::cout << " | " << std::setw(10) << _formated_print(this->_list_contact[i].getNick());    
    std::cout << " | " << std::endl;
}

std::string PhoneBook::_formated_print(std::string str) {
	std::string str_2 = "";

	if (str.size() <= 10)
		return (str);
	str_2 = str.substr(0, 9);
	str_2 += '.';		
	return (str_2);
}

void PhoneBook::displayDetails(int i) {
    std::cout << "First Name : " << this->_list_contact[i].getFname() << std::endl;
    std::cout << "Last Name : " << this->_list_contact[i].getLname() << std::endl;
    std::cout << "Nickname : " << this->_list_contact[i].getNick() << std::endl;
    std::cout << "Phone number : " << this->_list_contact[i].getNum() << std::endl;
    std::cout << "Darkest secret : " << this->_list_contact[i].getSecret() << std::endl;
}

