#include <string>
#include <iostream>
#include <fstream>
#include <cstdio>

int file_to_modify(char *file, std::string *file_to_modif)
{
    char storage[127];
    std::ifstream   ifs;

    ifs.open(file);
    if (ifs == NULL)
    {
        std::cout << "Error :\nFile doesn't exist" << std::endl;
        return (0);
    }

    while (ifs.get(storage, 127))
        *file_to_modif += storage;
    ifs.close();
    return (1);
}

int        replace_txt(std::string *file_to_modify , std::string str1, std::string str2)
{
    int pos;
    size_t size_arg1;
    size_t size_arg2;

    size_arg1 = str1.size();
    size_arg2 = str2.size();
    if (size_arg1 == 0 || size_arg2 == 0)
    {
        std::cout << "Error :\nempty arg(s) given" << std::endl;
        return (0);
    }
    pos = 0;
    while ((pos = file_to_modify->find(str1, pos)) != -1)
    {
        file_to_modify->replace(pos, size_arg1, str2);
        pos += size_arg2;
    }
    return (1);
}

void write_in_file(std::string filename, std::string file_to_write)
{
    std::ofstream file;

    filename = filename + ".replace";
    file.open(filename);

    file << file_to_write;  
    file.close();
}

int main(int argc, char **argv)
{
    std::string replace;
    std::string file_to_modif;

    if (argc != 4)
    {
        std::cout << "number of arguments invalid" << std::endl;
        return (0);
    }
    if ((file_to_modify(argv[1], &file_to_modif) == 0))
        return (0);
    if (replace_txt(&file_to_modif, argv[2], argv[3]) == 0)
        return (0);
    write_in_file(argv[1], file_to_modif);
    return (1);
}