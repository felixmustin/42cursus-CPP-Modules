#include "Cure.hpp"

Cure::Cure() : AMateria("cure") { }

Cure::~Cure(void) { }

Cure::Cure(const Cure &C) {
	*this = C;
}

Cure &Cure::operator=(const Cure& C) {
	this->_type = C.getType();
	return *this;
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const {
    return (new Cure(*this));
}