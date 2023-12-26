#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");

	int lvl = 1;
	int pointScore;

	std::cout << "Введите число очков: ";
	std::cin >> pointScore;

	if (pointScore < 1000)
	{
		std::cout << "Ваш уровень: " << lvl;
	}
	else if (1000 <= pointScore < 2500)
	{
		std::cout << "Ваш уровень: " << lvl + 1;
	}
	else if (2500 <= pointScore < 5000)
	{
		std::cout << "Ваш уровень: " << lvl + 2;
	}
	else
	{
		std::cout << "Ваш уровень: " << lvl + 3;
	}
}
