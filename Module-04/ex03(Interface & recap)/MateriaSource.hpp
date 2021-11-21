#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria **copies;
public:
	MateriaSource();
	MateriaSource(const MateriaSource &materiaSource);
	MateriaSource& operator=(const MateriaSource &materiaSource);
	virtual ~MateriaSource();

	void learnMateria(AMateria *materia);
	AMateria *createMateria(const std::string &type);
};

#endif //MATERIASOURCE_HPP
