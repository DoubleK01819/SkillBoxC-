#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int scoreWater, scoreMilk, americano = 0, latte = 0;

	cout << "Введите скол-во воды в мл: ";
	cin >> scoreWater;
	cout << "Введите кол-во молока в мл: ";
	cin >> scoreMilk;

	for (;;)
	{
		int choice;

		if (scoreWater < 300)
		{
			if (scoreMilk < 270)
			{
				cout << "Ингредиентов осталось:" << endl;
				cout << " Вода: " << scoreWater << " мл" << endl;
				cout << " Молоко: " << scoreMilk << " мл" << endl;

				cout << "Кружек американо приготовлено: " << americano << endl;
				cout << "Кружек латте приготовлено: " << latte << endl;
				break;
			}
		}

		cout << "Выберите напиток (1 - американо, 2 - латте): ";
		cin >> choice;

		if (choice == 1)
		{
			if (scoreWater < 300)
			{
				cout << "Напиток не может быть приготовлен! Не хватает воды" << endl;
			}
			else
			{
				scoreWater -= 300;
				cout << "Ваш напиток готов" << endl;
				americano++;
			}
		}
		else if (choice == 2)
		{
			
			if (scoreWater < 30 || scoreMilk < 270)
			{
				cout << "Напиток не может быть приготовлен! Не хватает воды" << endl;
			}
			else
			{
				scoreMilk -= 270;
				scoreWater -= 30;
				cout << "Ваш напиток готов\n" << endl;
				latte++;
			}
		}
	}
}