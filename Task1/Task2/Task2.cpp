#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int number;
	int scoreNumber = 0;

	cout << "Введите число: ";
	cin >> number;
	if (number == 0)
	{
		scoreNumber = 1;
	}
	else if (number < 0)//если требуется считать знак минус
	{
		scoreNumber = 1;
		while (number)
		{
			number /= 10;
			scoreNumber++;
		}
	}
	else
	{
		while (number)
		{

			number /= 10;
			scoreNumber++;
		}
	}
	

	cout << "Цифр в числе: " << scoreNumber;
}
