#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int firstBoxLength;
	int firstBoxWidth;
	int firstBoxHeight;

	int secondBoxLength;
	int secondBoxWidth;
	int secondBoxHeight;

	cout << "Введите размер первой коробки: ";
	cin >> firstBoxLength >> firstBoxWidth >> firstBoxHeight;

	cout << "Введите размер второй коробки: ";
	cin >> secondBoxLength >> secondBoxWidth >> secondBoxHeight;

	if (firstBoxLength >= secondBoxLength && firstBoxWidth >= secondBoxWidth && firstBoxHeight >= secondBoxHeight)
	{
		cout << "Можно";
	}
	else if (secondBoxLength >= secondBoxWidth && firstBoxWidth >= secondBoxLength && firstBoxHeight >= secondBoxHeight)
	{
		cout << "Можно";
	}
	else if(firstBoxLength >= secondBoxLength && firstBoxWidth >= secondBoxHeight && firstBoxHeight >= secondBoxWidth)
	{
		cout << "Можно";
	}
	else if (secondBoxLength >= secondBoxWidth && firstBoxWidth >= secondBoxLength && firstBoxHeight >= firstBoxWidth)
	{
		cout << "Можно";
	}
	else
	{
		cout << "Нельзя";
	}
}
