#include "Array.hpp"

template<typename T>
Array<T>::~Array(){}

template<typename T>
Array<T>::Array(){
    array = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int n){
    array = new T[n];
}

template<typename T>
Array<T>::Array(Array const &cp){
    *this = cp;
}

template<typename T>
Array<T>&   Array<T>::operator=(Array const &cpi){
    size_t s = cpi._size();
    array = new T(s);
    for (int i = 0; i < this->size(); i++)
        array[i] = cpi.array[i];
    _size = cpi._size;
    return *this;
}

template<typename T>
T   &Array<T>::operator[](size_t i){
    if (!array[i])
        throw Array<T>::OutException();
    return (array[i]);
}

template<typename T>
const char *Array<T>::OutException::what() const throw(){
    return ("index out of bonds");
}

template<typename T>
size_t  Array<T>::size(){
    _size = 0;
    while (array[_size])
        _size++;
    return _size;
}