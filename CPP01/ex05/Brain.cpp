#include "Brain.hpp"

Brain::Brain(void)
{
}

std::string Brain::identify() const
{
    std::stringstream ss;
    std::string address;

    ss << this;
    address = ss.str();
    return (address);
}