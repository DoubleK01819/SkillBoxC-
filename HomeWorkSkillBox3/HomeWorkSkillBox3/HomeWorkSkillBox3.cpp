#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");

    int firstNumber;
    int secondNumber;

    std::cout << "Введите первое число: ";
    std::cin >> firstNumber;
    std::cout << "Введите второе число: ";
    std::cin >> secondNumber;
    std::cout << "-----Проверяем-----\n";

    if (firstNumber > secondNumber)
    {
        std::cout << "Наименьшее число: " << secondNumber;
    }
    else if (firstNumber < secondNumber)
    {
        std::cout << "Наименьшее число: " << firstNumber;
    }
    else
    {
        std::cout << "Числа равны!";
    }
}

