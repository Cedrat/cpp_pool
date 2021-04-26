#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void iter(T *array, int size_array, void (f)(T const &))
{
    for (int i = 0 ; i < size_array; i++)
    {
        f(array[i]);
    };
}

#endif
