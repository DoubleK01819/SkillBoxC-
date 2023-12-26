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

    if (firstNumber % secondNumber == 0)
    {
        std::cout << "Да, " << firstNumber << " делится на " << secondNumber << " без остатка";
    }

    else
    {
        std::cout << "Нет, " << firstNumber << " не делится на " << secondNumber << " без остатка";
    }
}
