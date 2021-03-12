#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "And human created Brain" << std::endl;
    _cells = "nervous";
}

std::string Brain::getCells(void) const
{
    return (this->_cells);
}
std::string Brain::identify() const
{
    std::stringstream ss;
    std::string address;

    ss << this;
    address = ss.str();
    return (address);
}