#include <iostream>
#include <limits>
#include <typeinfo>

#include "functions.hpp"

void print(int a, int b){
    std::cout << a << ' ' << b << '\n';
}


void testOutput(int a, int b){
    std::cout << a << ' ' << b << '\n';
}
int test(int& prn){
    int b{};
    for(int i = 0; i < 10; i++){
        b += i;
        ++prn;
    }
    std::cout << b << '\n';
    return b;
}
int main(){
    int a{}
}
