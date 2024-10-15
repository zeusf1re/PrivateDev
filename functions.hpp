#include <functional>
#include <iostream>
#include <limits>
#include <typeinfo>

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




struct ErrorsTest {
    public:
        enum DataTypes {
            Int,
            Char,
            Double
        };
        static void ErrorOutput() {
            ColorChoice::SetColor(ColorChoice::red);
            std::cout << "Неправильный формат ввода данных\n";
            ColorChoice::ResetColor();
            exit(1);
        };

        template <typename AnyType>
        static AnyType CorrectInput(ErrorsTest::DataTypes wantedType) {
            int Input = std::numeric_limits<int>::min();
            const int minimum = std::numeric_limits<int>::min();
            std::cout << Input;
            switch (wantedType) {
                case DataTypes::Int:
                    {
                        const int a{};
                        std::cout << Input;
                        std::cin >> Input;
                        std::cout << Input;
                        if (std::cin.peek() != '\n' || Input == minimum) {
                            std::cin.clear();
                            while(std::cin.get() != '\n') {};
                            ErrorOutput();
                            return 0;
                        } else {
                            return Input;
                        }
                        break;
                    }
                case DataTypes::Char:
                    return 0;
                    break;
                case DataTypes::Double:
                    return 0;
                    break;
                default:
                    ErrorOutput();
                    return 1;
            }
        };
};
