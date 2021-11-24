#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : copies(new AMateria*[4]){
	for (int i = 0; i < 4; i++) {
		this->copies[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource) {
	*this = materiaSource;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource) {
	if (this != &materiaSource) {
		for (int i = 0; i < 4; i++){
			if (this->copies[i])
				delete copies[i];
			if (materiaSource.copies[i])
				this->copies[i] = materiaSource.copies[i];
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->copies[i])
			delete copies[i];
	}
}

void MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < 4; i++) {
		if (this->copies[i] == NULL) {
			this->copies[i] = materia->clone();
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; i++) {
		if (this->copies[i] && !(type.compare(this->copies[i]->getType())))
			return copies[i]->clone();
	}
	return 0;
}
