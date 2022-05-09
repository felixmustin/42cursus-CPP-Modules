#include <iostream>
#include "Contact.hpp"

Contact::Contact() {
}


std::string	Contact::getFname() {
	return _first_name;
}

std::string	Contact::getLname()
{
	return _last_name;
}

std::string	Contact::getNick()
{
	return _nickname;
}

std::string	Contact::getNum() {
	return _number;
}

std::string	Contact::getSecret() {
	return _darkest_secret;
}

void Contact::setFname(std::string fname) {
	_first_name = fname;
}

void Contact::setLname(std::string lname) {
	_last_name = lname;
}

void Contact::setNick(std::string nick) {
	_nickname = nick;
}

void Contact::setNum(std::string num) {
	_number = num;
}

void Contact::setSecret(std::string secret) {
	_darkest_secret = secret;
}

Contact::~Contact(void) {    
}