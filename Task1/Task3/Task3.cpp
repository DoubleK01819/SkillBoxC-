#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int summDuty;
	string name;
	int remainder = 0;

	cout << "Введите ваше имя и сумму долга через пробел: ";
	cin >> name >> summDuty;

	if (summDuty > 0)
	{
		while (summDuty > 0)
		{
			int repayment;
			cout << "Внесите платеж: ";
			cin >> repayment;

			if (repayment >= summDuty)
			{
				remainder = summDuty % repayment;
			}

			
			summDuty -= repayment;
			cout << "Вам осталось внести - " << summDuty << endl;
			

		}

		cout << "Долг закрыт\nВаш остаток - " << remainder;
	}
	else
	{
		cout << "Ошибка! Введены некоторектные данные";
	}

}
