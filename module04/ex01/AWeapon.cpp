#include "AWeapon.hpp"

AWeapon&	AWeapon::operator=(const AWeapon& weapon) {
	this->_name = weapon._name;
	this->_apcost = weapon._apcost;
	this->_damage = weapon._damage;
	return *this;
}

int			AWeapon::getDamage(void) const {
	return (this->_damage);
}

int			AWeapon::getAPCoast(void) const {
	return (this->_apcost);
}

std::string	AWeapon::getName(void) const {
	return (this->_name);
}

AWeapon::AWeapon(const AWeapon& weapon) {
	*this = weapon;
}

AWeapon::AWeapon(const std::string& name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage) {}

AWeapon::AWeapon(): _name("none"), _apcost(0), _damage(0) {}

AWeapon::~AWeapon() {}