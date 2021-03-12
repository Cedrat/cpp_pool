#include <string>
#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *pt_brain = &brain;
    std::string &ref_brain = brain;

    std::cout << *pt_brain << std::endl;
    std::cout << ref_brain << std::endl;
}