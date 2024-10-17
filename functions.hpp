#include <functional>
#include <iostream>
#include <limits>
#include <typeinfo>
#include <string>
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




// struct ErrorsTest {
//     public:
//         enum DataTypes {
//             Int,
//             Char,
//             Double
//         };
//         static void ErrorOutput() {
//             ColorChoice::SetColor(ColorChoice::red);
//             std::cout << "Неправильный формат ввода данных\n";
//             ColorChoice::ResetColor();
//             exit(1);
//         };

//         template <typename AnyType>
//         static AnyType CorrectInput(ErrorsTest::DataTypes wantedType) {
//             int Input = std::numeric_limits<int>::min();
//             switch (wantedType) {
//                 case DataTypes::Int:
//                     {
//                         const int startDefInput = std::numeric_limits<int>::min();
//                         std::cin >> Input;
//                         if (std::cin.get() != '\n' || Input == startDefInput) {
//                             std::cin.clear();
//                             std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//                             ErrorOutput();

//                         } else {
//                             return Input;
//                         }
//                     }
//                 case DataTypes::Char:
//                     return 0;
//                     break;
//                 case DataTypes::Double:
//                     return 0;
//                     break;
//                 default:
//                     ErrorOutput();
//                     return 1;
//             }
//         };
// };

// #include <iostream>
// #include <limits>
// #include <string>
// #include <sstream>

// struct ColorChoice {
//     static void SetColor(int color) {
//         // Реализация изменения цвета текста
//     }
//     static void ResetColor() {
//         // Реализация сброса цвета текста
//     }
// };

int test(int&);


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

struct a{
    int a{};
    int b{};
};
