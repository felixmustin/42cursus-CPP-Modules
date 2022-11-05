#include "AMateria.hpp"

AMateria::AMateria(void) { }

AMateria::AMateria(std::string const & type) : _type(type) { }

AMateria::~AMateria(void) { }

AMateria::AMateria(const AMateria &A) {
	*this = A;
}

AMateria &AMateria::operator=(const AMateria& A) {
	this->_type = A.getType();
	return *this;
}

std::string const & AMateria::getType() const {
    return this->_type;
}

void AMateria::use(ICharacter& target) {
    std::cout << "AMateria use ..." << target.getName() << std::endl;
}