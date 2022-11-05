#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    for (int i = 0; i < 4; i++) {
        this->_materiasInv[i] = nullptr;
    }
}

MateriaSource::~MateriaSource(void) {
    for (int i = 0; i < 4; i++)
	{
		if (this->_materiasInv[i])
			delete this->_materiasInv[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const &M) {
    for (int i = 0; i < 4; i++)
		this->_materiasInv[i] = nullptr;
	*this = M;
}

MateriaSource &MateriaSource::operator = (MateriaSource const &M) {
    for (int i = 0; i < 4; i++) {
        if (this->_materiasInv[i])
            delete this->_materiasInv[i];
        this->_materiasInv[i] = M._materiasInv[i];
    }   
    return *this;
}

void MateriaSource::learnMateria(AMateria *materia) {
    for (int i = 0; i < 4; i++) {
        if (this->_materiasInv[i] == nullptr) {
            this->_materiasInv[i] = materia;
            std::cout << "Materia " << materia->getType() << " learned" << std::endl;
			return ;
        }
    }
    std::cout << "Cannot learn materia anymore" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
	    if (this->_materiasInv[i]) {
            if (this->_materiasInv[i]->getType() == type)
                return (this->_materiasInv[i]->clone());
        }
	}
	return (NULL);	
}