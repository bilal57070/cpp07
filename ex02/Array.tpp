#include "Array.hpp"

template<typename T>
Array<T>::~Array(){}

template<typename T>
Array<T>::Array(){
    array = new T[0];
}

template<typename T>
Array<T>::Array(uint n){
    array = new T[n];
}

template<typename T>
Array<T>::Array(Array const &cp){
    *this = cp;
}

template<typename T>
Array<T>&   Array<T>::operator=(Array const &cpi){
    array = cpi.array;
    size = cpi.size;
    return *this;
}

template<typename T>
Array<T>