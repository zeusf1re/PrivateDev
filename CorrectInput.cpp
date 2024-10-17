#include "CorrectInput.hpp"

int main([[maybe_unused]] int argc, [[maybe_unused]] char** argv) {
    auto userInt = ErrorsTest::CorrectInput<int>(ErrorsTest::DataTypes::Int);
    auto userChar = ErrorsTest::CorrectInput<char>(ErrorsTest::DataTypes::Char);
    auto userDouble = ErrorsTest::CorrectInput<double>(ErrorsTest::DataTypes::Double);
    std::cout << userInt << ' ' << userChar << ' ' << userDouble << std::endl;

    /*
    в треугольных скобках Вы указываете тип нужной вам переменной в с++ формате (int, char, double)
    в качестве аргумента передаете одну из переменных enum DataTypes (Int, Char, Double) соответственно

    функция CorrectInput() создаст поток cin. если пользователь ввел корректное число(без пробелов, enter и любых других символов),
    то вернет в переменную то, что он ввел в указанном Вами при вызове функции типе

    в случае некорректного ввода пользователя функция завершит выполнение программы с кодом 1 и сообщением об ошибке "Неправильный формат ввода данных"
    */
}
