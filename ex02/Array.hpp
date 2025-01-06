#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>

template<typename T> class Array
{
    public:
        ~Array();
        Array();
        Array(uint n);
        Array(Array const &cp);
        Array& operator=(Array const &cpi);
        Arra

    private:
        T *array;
        size_t size;
};







#endif