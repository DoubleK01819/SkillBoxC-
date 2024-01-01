#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int numerator;
	int denominator;

	cout << "Введите числитель: ";
	cin >> numerator;
	cout << "Введите знаменатель: ";
	cin >> denominator;

	if (denominator > 0)
	{
		for (int i = abs(numerator); i > 0; i--)
		{
			if (numerator % i == 0 && denominator % i == 0)
			{
				numerator /= i;
				denominator /= i;
				cout << "Результат: " << numerator << " / " << denominator;
				break;
			}
		}
	}
	else
	{
		cout << "Неправильный ввод";
	}

}