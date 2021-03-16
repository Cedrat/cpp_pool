#include "Human.hpp"
#include "Brain.hpp"

Human::Human()
{
}

const Brain& Human::getBrain(void) const
{
    return (_brain);
}
std::string Human::identify() const
{
    return (_brain.identify());
}