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

struct ErrorsTest {
public:
    enum DataTypes {
        Int,
        Char,
        Double
    };

    static void ErrorOutput() {
        ColorChoice::SetColor(ColorChoice::Colors::red);
        std::cout << "Неправильный формат ввода данных\n";
        ColorChoice::ResetColor();
        exit(1);
    }
    template<typename UserType>
    static UserType CorrectInput(DataTypes wantedType) {
        if(wantedType == DataTypes::Char) {
            char firstSymbol = std::cin.get();
            char secondSymbol = std::cin.get();
            if (isalpha(firstSymbol) && secondSymbol == '\n') {
                return firstSymbol;
            }
            while(std::cin.get() != '\n');
            ErrorOutput();
        }

        char firstSymbol = std::cin.peek();
        if(!isdigit(firstSymbol)){
            ErrorOutput();
        }

        double Input{};
        std::cin >> Input;
        std::cin.clear();

        if(std::cin.get() != '\n') {
            while(std::cin.get() != '\n');
            ErrorOutput();
        }

        if (wantedType == DataTypes::Double){
            return Input;
        }
        return static_cast<UserType>(Input);
    }
};
