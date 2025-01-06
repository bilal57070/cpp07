#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *array, size_t lenght, void (*f)(T&))
{
    if (array == NULL || lenght == 0)
        return;
    for (size_t i = 0; i < lenght; ++i)
        f(array[i]);
}


#endif