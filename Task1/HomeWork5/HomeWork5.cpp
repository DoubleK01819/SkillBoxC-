#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int hours;

	cout << "Введите, который час: ";
	cin >> hours;

	if (hours > 0 && hours <= 24)
	{
		while (hours--)
		{
			cout << "Ку-ку!" << endl;
		}
	}
	else
	{
		cout << "Ошибка! Введены некоректные данные";
	}
}