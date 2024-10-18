#include <iostream>

#include "CorrectInput.hpp"

int main([[maybe_unused]] int argc, [[maybe_unused]] char** argv){
    std::cout << "Hello, world!" << std::endl;
    int a{};
    std::cin >> a;
    std::cout << a << std::endl;
    char firstLetter = std::cin.get();
    std::cout << firstLetter << std::endl;
    return 0;
    auto b = ErrorsTest::CorrectInput<char>(ErrorsTest::DataTypes::Char);
}
