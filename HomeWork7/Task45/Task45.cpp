#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int width, height;
	cout << "Введите ширину и выосту рамки: ";
	cin >> width >> height;

	for (int i = 0; i <= height; i++)
	{
		cout << "|";
		for (int j = 0; j <= width - 2; j++)
		{
			if (i == 0 || i == height)
			{
				cout << "-";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "|" << endl;
	}
}
