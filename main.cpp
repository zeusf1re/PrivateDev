#include <iostream>
#include <limits>
#include <typeinfo>

#include "functions.hpp"


int main(int argc, char** argv) {
    //int b = ErrorsTest::CorrectInput<int>(ErrorsTest::DataTypes::Int);
    //std::cout << b << '\n';
    int a = 1488;
    std::cin >> a;
    auto b = std::cin.get();
    while (b != '\n') {
        std::cout << b;
        b = std::cin.get();
    }
    std::cout <<  a;
}
