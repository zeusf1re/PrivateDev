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

int main(int argc, char** argv) {
    // a ex;
    // ex.a = 123;
    // ex.b = 456;
    // print(ex.a, ex.b);
    // int n = 1;
    // int& prn = n;
    // testOutput(n - 1, test(prn));
    auto intTest = ErrorsTest::CorrectInput<int>(ErrorsTest::DataTypes::Int);
    auto charTest = ErrorsTest::CorrectInput<char>(ErrorsTest::DataTypes::Char);
    auto doubleTest = ErrorsTest::CorrectInput<double>(ErrorsTest::DataTypes::Double);
    std::cout << intTest << ' ' << charTest << ' ' << sdoubleTest << '\n';
}
