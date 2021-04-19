#include <string>
#include <iostream>
#include <cmath>
#pragma pack(1)

typedef struct s_data{
    std::string part1;
    int nb;
    std::string part2;
} t_data;

std::string random_name()
{
    char keyboard[] = "qwertyuiopasdfghjklzxcvbnm";
    int i;
    std::string random;
    i = 0;
    while (i < 8)
    {
        random[i] += keyboard[std::rand()%26];
        i++;
    }
    return (&random[0]);

}
void *serialize(void)
{
    void * void_p;
    t_data *data = new t_data;
    
    data->part1 = random_name();
    data->nb = std::rand();
    data->part2 = random_name();

    void_p = reinterpret_cast<void*>(data);
    return (void_p);
}

t_data * deserialize(void * raw)
{
    t_data *data;
    data = reinterpret_cast<t_data*>(raw); 
    return (data);
}

int main()
{
    void *seria;
    t_data *data;

    std::srand(time(0));
    seria = serialize();
    data = deserialize(seria);
 
    std::cout << data->part1 << std::endl;
    std::cout << data->nb << std::endl;
    std::cout << data->part2 << std::endl;
    std::cout << sizeof(*data) << std::endl;
}