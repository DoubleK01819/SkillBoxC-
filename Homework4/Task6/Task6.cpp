#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int day;
	int month;
	int year;

	cout << "Введите сегодняшнюю дату через пробел: ";
	cin >> day >> month >> year;

	int dayBirth;
	int monthBirth;
	int yearBirth;

	cout << "Введите дату рождения посетителя через пробел: ";
	cin >> dayBirth >> monthBirth >> yearBirth;

	if (year - yearBirth > 18)
	{
		cout << "Продавать можно";
	}
	else if (year - yearBirth == 18)
	{
		if (month > monthBirth)
		{
			if (day > dayBirth)
			{
				cout << "Продавать нельзя";
			}
			else
			{
				cout << "Продавать можно";
			}
		}
		else
		{
			cout << "Продавать нельзя";
		}
	}
	else
	{
		cout << "Продавать нельзя";
	}
}
