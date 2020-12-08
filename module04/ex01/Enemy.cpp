#include "Enemy.hpp"

void		Enemy::takeDamage(int damage) {
	if (_hp < 0)
		return ;
	_hp -= damage;
}

int			Enemy::getHp(void) const {
	return (this->_hp);
}

std::string	Enemy::getType(void) const {
	return (this->_type);
}

Enemy&		Enemy::operator=(const Enemy& enemy) {
	this->_hp = enemy._hp;
	this->_type = enemy._type;
	return *this;
}

Enemy::Enemy(const Enemy& enemy) {
	*this = enemy;
}

Enemy::Enemy(int hp, const std::string& type): _hp(hp), _type(type) {}

Enemy::Enemy() {}

Enemy::~Enemy() {}