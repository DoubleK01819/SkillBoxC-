#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int subsequence;
	int numberSubsequence = 0;
	int fibonacci = 1;

	cout << "Введите номер последовательности: ";
	cin >> subsequence;

	for (int i = 1; i < subsequence; i++)
	{
		fibonacci += numberSubsequence;
		numberSubsequence = fibonacci - numberSubsequence;
	}

	cout << "Число в последовательности: " << fibonacci;
}