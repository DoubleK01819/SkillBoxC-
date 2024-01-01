#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int numberTicket;
	double summRight = 0;
	int summLeft = 0;
	int scoreNumber = 0;

	cout << "Введите номер билета: ";
	cin >> numberTicket;
	int temp = numberTicket;
	
	while (temp)
	{
		temp /= 10;
		scoreNumber++;
	}

	for (int i = 0; i <= scoreNumber; i++)
	{
		int power = pow(10, i);

		if (i < 3)
		{
			summRight += numberTicket / power % 10;
		}
		else
		{
			summLeft += numberTicket / power % 10;
		}
	}

	if (summLeft == summRight)
	{
		cout << "Счастливый билет";
	}
	else
	{
		cout << "Обычный билет";
	}
}