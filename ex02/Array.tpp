#include "Array.hpp"

template<typename T>
Array<T>::~Array(){
    delete [] array;
}

template<typename T>
Array<T>::Array(){
    array = new T[0];
    _size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n){
    array = new T[n];
    _size = n;
}

template<typename T>
Array<T>::Array(Array const &cp){
    *this = cp;
}

template<typename T>
Array<T>&   Array<T>::operator=(Array const &cpi){
    if (this != &cpi){
        delete [] array;
        _size = cpi._size;
        array = new T(cpi._size);
        for (unsigned int i = 0; i < _size; i++)
            array[i] = cpi.array[i];
    }
    return *this;
}

template<typename T>
T   &Array<T>::operator[](size_t i){
    if (i > _size)
        throw Array<T>::OutException();
    return (array[i]);
}

template<typename T>
const char *Array<T>::OutException::what() const throw(){
    return ("index out of bonds");
}

template<typename T>
size_t  Array<T>::size(){
    return _size;
}