#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

	int dayMonth;
	int dayWeek;

	cout << "Введите день месяца: ";
	cin >> dayMonth;
	cout << "Введите номер дня недели: ";
	cin >> dayWeek;

	if (dayMonth >= 1 && dayMonth <= 5 || dayMonth >= 8 && dayMonth <= 10)
	{
		cout << "Сейчас выходной";
	}
	else if ((dayMonth + dayWeek + 1) % 7 == 0 || dayMonth % 7 == 0)
	{
		cout << "Выходной";
	}
	else
	{
		cout << "Рабочий день";
	}
}
