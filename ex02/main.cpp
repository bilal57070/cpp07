#include "Array.hpp"
#include "Array.tpp"
#include <string>


int main(){
    Array<int> test2(6);
    //std::string re = "helloc";
    try {
    for (int i = 0; i < 6; i++)
        test2[i] = i * 5;
    for (int j = 0; j < 6; j++){
        std::cout << test2[j] << std::endl;
    }
    }
    catch(std::exception &e){
    }
}