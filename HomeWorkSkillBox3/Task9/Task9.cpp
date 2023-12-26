#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int income;
	int totalIncome;

	cout << "Введите ваш доход: ";
	cin >> income;

	if (income > 50000)
	{
		totalIncome = 0.3 * (income - 50000) + 0.2 * (50000 - 10000) + 0.13 * 10000;
	}
	else if (10000 < income < 50000)
	{
		totalIncome = 0.2 * (income - 10000) + 0.13 * 10000;
	}
	else
	{
		totalIncome = 0.13 * income;
	}
	cout << totalIncome;
}