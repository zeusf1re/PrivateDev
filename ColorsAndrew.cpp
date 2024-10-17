#include "ColorsAndrew.hpp"
#include <iostream>

int main([[maybe_unused]]int argc, [[maybe_unused]] char** argv) {
    ColorChoice::SetColor(ColorChoice::Colors::green);
    std::cout << "Теперь этот текст будет зеленым, пока не поменяю цвет либо не сброшу его\n";
    ColorChoice::ResetColor();
}
