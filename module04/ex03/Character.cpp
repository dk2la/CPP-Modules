#include "Character.hpp"

void				Character::use(int idx, ICharacter& target) { this->_pool[idx]->use(target); }

void				Character::unequip(int idx) {
	AMateria**		poolBuff = new AMateria*[this->_countPool - 1];
	for (uint i = 0; i < this->_countPool; ++i) {
		if (i == static_cast<uint>(idx))
			++i;
		else
			poolBuff[i] = this->_pool[i];
	}
	delete [] this->_pool;
	this->_pool = new AMateria*[--this->_countPool];
	for (uint i = 0; i < this->_countPool; ++i)
		_pool[i] = poolBuff[i];
}

void				Character::equip(AMateria* m) {
	if (this->_countPool == 0) {
		this->_pool = new AMateria*[++this->_countPool];
		this->_pool[this->_countPool - 1] = m;
	}
	else if (this->_countPool != 4) {
		AMateria** newPool = new AMateria*[++this->_countPool];
		for (uint i = 0; i < this->_countPool - 1; ++i)
			newPool[i] = _pool[i];
		newPool[this->_countPool - 1] = m;
		delete [] _pool;
		this->_pool = new AMateria*[this->_countPool];
		for (uint i = 0; i < this->_countPool; ++i)
			_pool[i] = newPool[i];
		delete [] newPool;
	}
}

std::string	const &	Character::getName(void) const { return(this->_name); }

Character&	Character::operator=(const Character& ch) {
	this->_pool = ch._pool;
	this->_countPool = ch._countPool;
	this->_name = ch._name;
	return *this;
}

Character::Character(const Character& ch) { *this = ch; }

Character::Character(const std::string& name): _pool(nullptr), _countPool(0), _name(name) {}

Character::Character(): _pool(nullptr), _countPool(0), _name(0) {}

Character::~Character() {}
