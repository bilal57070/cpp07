#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T> class Array
{
    public:
        ~Array();
        Array();
        Array(unsigned int n);
        Array(Array const &cp);
        Array& operator=(Array const &cpi);
        T&  operator[](size_t i);

            class OutException : public std::exception {
        public:
            const char *what() const throw();
        };

        size_t  size();
    private:
        T *array;
        size_t _size;
};







#endif