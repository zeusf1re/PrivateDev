#ifndef ZXC
#define ZXC

#include <iostream>

struct ColorChoice {
 public:
    enum Colors {
        yellow = 33,
        red = 31,
        green = 32,
        blue = 34,
        magneta = 35
    };
    static void SetColor(Colors pickedColor) { std::cout << "\033[" << pickedColor << 'm'; }

    static void ResetColor() { std::cout << "\033[0m"; }
};

#endif
