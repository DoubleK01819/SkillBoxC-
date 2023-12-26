
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int people;
	int barber;
	int numberClientsInDay = 8;

	cout << "Введите число людей проживающие в городе: ";
	cin >> people;
	cout << "Введите число барберов: ";
	cin >> barber;

	int peoplePerBarberPeople = numberClientsInDay * 30;
	int allBarber = barber * peoplePerBarberPeople;

	if (allBarber > people)
	{
		cout << "Барберов хватает";
	}

	else
	{
		cout << "Нужны еще барберы";
	}
}