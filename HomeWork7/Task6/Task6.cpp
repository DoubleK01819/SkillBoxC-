#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int length, exclamationMark;
	cout << "Введите общую длину колонтитула: ";
	cin >> length;
	cout << "Введите кол-во восклицательных знаков: ";
	cin >> exclamationMark;

	int summ = length - exclamationMark;

	if (summ % 2 != 0)
	{
		summ += 1;
	}

	for (int i = 0; i <= 1; i++)
	{
		for (int j = 1; j <= summ / 2; j++)
		{
			cout << "~";
		}
		if (i != 1)
		{
			for (int k = 1; k <= exclamationMark; k++)
			{
				cout << "!";
			}
		}
		
	}
	
}
