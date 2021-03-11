#include "Human.hpp"
#include "Brain.hpp"

Human::Human()
{
    Brain brain;
    this->_brain = &brain;
}

Brain &Human::getBrain(void)
{
    std::cout << "in get brain " <<_brain->identify() << std::endl ;
    return (*_brain);
}
std::string Human::identify()
{
    return (_brain->identify());
}