#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int horizontal = rand() % 21, vertical = rand() % 21;

	for (;;)
	{
		string comand;
		cout << "Марсоход находится на позиции " << vertical << ", " << horizontal << ", введите команду:" << endl;
		cin >> comand;

		if (comand == "W" || comand == "S")
		{
			if (comand == "W")
			{
				vertical++;
				if (vertical > 20)
				{
					vertical = 20;
				}
			}
			else if (comand == "S")
			{
				vertical--;
				if (vertical < 0)
				{
					vertical = 0;
				}
			}
		}
		else if (comand == "A" || comand == "D")
		{
			if (comand == "A")
			{
				horizontal--;
				if (horizontal < 0)
				{
					horizontal = 0;
				}
			}
			else if (comand == "D")
			{
				horizontal++;
				if (horizontal > 20)
				{
					horizontal = 20;
				}
			}
		}
	}
}
