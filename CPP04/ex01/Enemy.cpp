#include "Enemy.hpp"

Enemy::Enemy(void)
{

}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp) , _type(type)
{

}

Enemy::Enemy(Enemy const & src)
{
	*this = src;
}

Enemy::~Enemy()
{

}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return;
	if (damage >= this->_hp)
		this->_hp = 0;
	else
		this->_hp = this->_hp - damage;
}

int					Enemy::getHP() const
{
	return (this->_hp);
}

std::string const &	Enemy::getType() const
{
	return (this->_type);
}

Enemy &Enemy::operator=(Enemy const & rhs)
{
	this->_hp = rhs.getHP();
	this->_type = rhs.getType();
	return *this;
}

