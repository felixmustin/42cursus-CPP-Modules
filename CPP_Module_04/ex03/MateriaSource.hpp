#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

private:
    AMateria *_materiasInv[4];
public:
    MateriaSource(void);
    ~MateriaSource(void);
    MateriaSource(MateriaSource const &M);
	MateriaSource &operator = (MateriaSource const &M);

    void learnMateria(AMateria* materia);
    AMateria* createMateria(std::string const & type);
};

#endif