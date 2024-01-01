#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int contribution;
	double interestRate;
	int summ;
	int year = 0;

	cout << "Введите размер вклада: ";
	cin >> contribution;
	cout << "Введите процентную ставку: ";
	cin >> interestRate;
	cout << "Введите желаемую сумму: ";
	cin >> summ;


	double percent = interestRate / 100.0;

	while (contribution <= summ)
	{
		year += 1;
		contribution += percent * contribution;
	}

	cout << "Придеться подождать: " << year << " лет";
}