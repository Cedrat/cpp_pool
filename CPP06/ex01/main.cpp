#include <string>
#include <iostream>
#include <cmath>

void *serialize(void)
{
    std::string part1 = "beggini";
    std::string part2 = "endenden";
    void *temp;
    int nb;
    nb = 20;
    //void *data = reinterpret_cast<void *>(&nb);
    std::string sequence;
    //void *data = reinterpret_cast<void *>(&part1) + reinterpret_cast<void *>(&nb);
    temp = reinterpret_cast<void *>(&nb);
    sequence = *reinterpret_cast<std::string *>(&part1)  + *reinterpret_cast<std::string *>(&temp) + *reinterpret_cast<std::string *>(&part2);
    //std::string part2 = "endingen";
    void *data = reinterpret_cast<void *>(&sequence);
    return (data);
}

int main()
{
    std::string part2;
    int nb = 0;
    part2 = *reinterpret_cast<std::string *>(serialize());
    std::cout << part2 << std::endl;
}