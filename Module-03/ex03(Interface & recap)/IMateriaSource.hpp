#ifndef EX03_INTERFACE___RECAP__IMATERIASOURCE_HPP
#define EX03_INTERFACE___RECAP__IMATERIASOURCE_HPP


class IMateriaSource {
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};


#endif //EX03_INTERFACE___RECAP__IMATERIASOURCE_HPP
