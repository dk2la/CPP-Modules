#include "Character.hpp"

Character::Character(const Character& ch) {*this = ch;}

Character&	Character::operator=(const Character& ch) { 
	this->_name = ch._name;
	this->_countPool = ch._countPool;
	this->_pool = ch._pool;
	return (*this);
}

void	Character::use(int idx, ICharacter& target) {_pool[idx]->use(target);}

void	Character::unequip(int idx) {

	AMateria**	poolBuffer = new AMateria*[this->_countPool - 1];
	for (int i = 0; i < this->_countPool; ++i) {
		if (i == idx)
			++i;
		else
			poolBuffer[i] = _pool[i];
	}
	delete [] _pool;
	this->_countPool--;
	this->_pool = new AMateria*[this->_countPool];
	for (int i = 0; i < this->_countPool; ++i)
		_pool[i] = poolBuffer[i]; 
}

void	Character::equip(AMateria* m) {
	if (this->_countPool == 0) {
		this->_countPool++;
		this->_pool = new AMateria*[this->_countPool];
		this->_pool[this->_countPool - 1] = m;
	}
	else if (this->_countPool != 4) {
		this->_countPool++;
		AMateria **newPool = new AMateria*[this->_countPool];
		for (int i = 0; i < this->_countPool - 1; ++i)
			newPool[i] = _pool[i];
		newPool[this->_countPool - 1] = m;
		delete [] _pool;
		this->_pool = new AMateria*[this->_countPool];
		for (int i = 0; i < this->_countPool; ++i)
			_pool[i] = newPool[i];
		delete [] newPool;
	}
	else
		return ;
}

std::string	const&	Character::getName(void) const {return(this->_name);}

Character::Character(const std::string& name): _name(name), _pool(nullptr), _countPool(0) {}

Character::Character() {}

Character::~Character() {}