#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int dayWeek;

	cout << "Введите день месяца: ";
	cin >> dayWeek;

	if (dayWeek >= 1 && dayWeek <= 5 || dayWeek >= 8 && dayWeek <= 10)
	{
		cout << "Сейчас выходной";
	}
	else if (dayWeek % 7 == 0 || dayWeek % 7 == 6)
	{
		cout << "Выходной";
	}
	else
	{
		cout << "Рабочий день";
	}
}
