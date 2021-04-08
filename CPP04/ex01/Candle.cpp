#include "Candle.hpp"

Candle::Candle(void) : Enemy(1, "Light")
{
	std::cout << "* it's less dark *" << std::endl;
}

Candle::Candle(Candle const & src)
{
	std::cout << "* it's less dark *" << std::endl;
	*this = src;
}

Candle::~Candle()
{
	std::cout <<  "* it's look darker *" << std::endl;
}

void Candle::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}

Candle &Candle::operator=(Candle const & rhs)
{
	this->_hp = rhs.getHP();
	this->_type = rhs.getType();
	return *this;
}