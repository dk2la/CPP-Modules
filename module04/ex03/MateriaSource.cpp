#include "MateriaSource.hpp"

void		MateriaSource::learnMateria(AMateria* am) {
	if (this->_count == 0) {
		this->_count++;
		this->_backPool = new AMateria*[this->_count];
		this->_backPool[this->_count - 1] = am;
	}
	else if (this->_count != 4) {
		this->_count++;
		AMateria** newBackPool = new AMateria*[this->_count];
		for (int i = 0; i < this->_count - 1; ++i)
			newBackPool[i] = _backPool[i];
		newBackPool[this->_count - 1] = am;
		delete [] _backPool;
		this->_backPool = new AMateria*[this->_count];
		for (int i = 0; i < this->_count; ++i)
			_backPool[i] = newBackPool[i];
		delete [] newBackPool;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& ms) {
	this->_type = ms._type;
	this->_backPool = ms._backPool;
	this->_count = ms._count;
	return (*this);
}

AMateria*	MateriaSource::createMateria(std::string const& type) {
	return (new AMateria(*this));
}

MateriaSource::MateriaSource(std::string const& type): _type(type), _backPool(0), _count(0) {}

MateriaSource::MateriaSource() {}

MateriaSource::~MateriaSource() {}

