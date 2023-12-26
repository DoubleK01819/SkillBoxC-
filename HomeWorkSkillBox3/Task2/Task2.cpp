#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");

    int firstNumber;
    int secondNumber;
    int totalSum;

    std::cout << "Введите первое число: ";
    std::cin >> firstNumber;
    std::cout << "Введите второе число: ";
    std::cin >> secondNumber;
    std::cout << "Введите их сумму: ";
    std::cin >> totalSum;
    std::cout << "-----Проверяем-----\n";

    int result = firstNumber + secondNumber;

    if (result == totalSum)
    {
        std::cout << "Верно!";
    }
    else
    {
        std::cout << "Ошибка! Верный результат: " << result;
    }
}

