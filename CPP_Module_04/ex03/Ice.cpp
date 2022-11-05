#include "Ice.hpp"

Ice::Ice() : AMateria("ice") { }

Ice::~Ice(void) { }

Ice::Ice(const Ice &I) {
	*this = I;
}

Ice &Ice::operator=(const Ice& I) {
	this->_type = I.getType();
	return *this;
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const {
    return (new Ice(*this));
}