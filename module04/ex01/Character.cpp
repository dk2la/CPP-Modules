#include "Character.hpp"
#include "AWeapon.hpp"

void		Character::recoverAP(void) {
	if (_apcost > 40)
		_apcost = 40;
	else
		_apcost += 10;
}

void		Character::attack(Enemy* enemy) {
	if (!enemy)
		return ;
	std::cout << this->_name << " attacks " << enemy->getType() <<
		" with a " << _weapon->getName() << std::endl;
	_weapon->attack();
	_apcost -= _weapon->getAPCoast();
	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHp() <= 0)
		delete enemy;
}

void		Character::equip(AWeapon* weapon) {
	this->_weapon = weapon;
}

Character::Character(const Character& character) {
	*this = character;
}

AWeapon*	Character::getWeaponName(void) const {
	return (_weapon);
}

int			Character::getAP(void) const {
	return (this->_apcost);
}

std::string	Character::getName(void) const {
	return (this->_name);
}

std::ostream&	operator<<(std::ostream& out, const Character& character)
{
	if (!character.getWeaponName())
		return (out << character.getName() << " has " << character.getAP()
		<< " AP" << " and is unarmed!" << std::endl);
	else
		return (out << character.getName() << " has " << character.getAP()
			<< " AP" << " and wields a " << character.getWeaponName()->getName() << std::endl);
}

Character&	Character::operator=(const Character& character) {
	this->_name = character._name;
	this->_apcost = character._apcost;
	this->_weapon = character._weapon;
	return *this;
}

Character::Character(const std::string& name):  _name(name), _weapon(NULL), _apcost(40) {}

Character::~Character() {
	std::cout << this->_name << " is dead!" << std::endl;
}
