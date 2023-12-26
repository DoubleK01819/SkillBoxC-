#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    //Задание 3
    int number;

    std::cout << "Введите число: ";
    std::cin >> number;

    if (number % 2 == 0)
    {
        std::cout << "\nЧисло " << number << " - четное\n";
    }
    else
    {
        std::cout << "\nЧисло " << number << " - нечетное\n";
    }
}