#include "RadScorpion.hpp"
#include "Enemy.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout <<  "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & src)
{
	std::cout <<  "* click click click *" << std::endl;
	*this = src;
}

RadScorpion::~RadScorpion()
{
	std::cout <<  "* SPROTCH *" << std::endl;
}