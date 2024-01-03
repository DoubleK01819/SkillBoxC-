#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int reserve;

	cout << "Введите сколько гречки у вас есть: ";
	cin >> reserve;
	
	for (int month = 1; reserve > 0; month++)
	{
		if (reserve <= 4)
		{
			cout << "После " << month << " месяца гречка закончится";
			break;
		}
		else
		{
			reserve -= 4;
			cout << "После " << month << " месяца у вас в запасе останется: " << reserve << " кг гречки" << endl;
		}
	}
}