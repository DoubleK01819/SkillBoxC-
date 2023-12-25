#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	//Задание 1
	/*int passengers;
	int totalPassengers = 0;
	int ticetPrice = 20;
	int totalSum = 0;


	std::cout << "Прибываем на остановку «Улица программистов». В салоне пассажиров: " << totalPassengers;
	std::cout << "\nСколько пассажиров вышло на остановке? ";
	std::cin >> passengers;
	totalPassengers -= passengers;
	std::cout << "Сколько пассажиров зашло на остановке? ";
	std::cin >> passengers;
	totalPassengers += passengers;
	totalSum += passengers * ticetPrice;
	std::cout << "Отправляемся с остановки «Улица программистов». В салоне пассажиров: " << totalPassengers;
	std::cout << "\n-----------Едем---------\n";

	std::cout << "\nПрибываем на остановку «Улица Инженеров». В салоне пассажиров: " << totalPassengers;
	std::cout << "\nСколько пассажиров вышло на остановке? ";
	std::cin >> passengers;
	totalPassengers -= passengers;
	std::cout << "Сколько пассажиров зашло на остановке? ";
	std::cin >> passengers;
	totalPassengers += passengers;
	totalSum += passengers * ticetPrice;
	std::cout << "Отправляемся с остановки «Улица Инженеров». В салоне пассажиров: " << totalPassengers;
	std::cout << "\n-----------Едем---------\n";

	std::cout << "\nПрибываем на остановку «Улица Бэкендоров». В салоне пассажиров: " << totalPassengers;
	std::cout << "\nСколько пассажиров вышло на остановке? ";
	std::cin >> passengers;
	totalPassengers -= passengers;
	std::cout << "Сколько пассажиров зашло на остановке? ";
	std::cin >> passengers;
	totalPassengers += passengers;
	totalSum += passengers * ticetPrice;
	std::cout << "Отправляемся с остановки «Улица Бэкендоров». В салоне пассажиров: " << totalPassengers;
	std::cout << "\n-----------Едем---------\n";

	std::cout << "\nПрибываем на остановку «Улица Фронтендоры». В салоне пассажиров: " << totalPassengers;
	std::cout << "\nСколько пассажиров вышло на остановке? ";
	std::cin >> passengers;
	totalPassengers -= passengers;
	std::cout << "Сколько пассажиров зашло на остановке? ";
	std::cin >> passengers;
	totalPassengers += passengers;
	totalSum += passengers * ticetPrice;
	std::cout << "Отправляемся с остановки «Улица Фронтендоры». В салоне пассажиров: " << totalPassengers;
	std::cout << "\n-----------Едем---------\n";

	int salaryCost = totalSum / 1 / 4;
	int fuelCost = totalSum / 1 / 5;
	int taxesCost = totalSum / 1 / 5;
	int carRepairsCost = totalSum / 1 / 5;

	std::cout << "\nВсего заработали: " << totalSum << " руб.";
	std::cout << "\nЗарплата водителя: " << salaryCost << "руб.";
	std::cout << "\nРасходы на топливо: " << fuelCost << "руб.";
	std::cout << "\nНалоги: " << taxesCost << "руб.";
	std::cout << "\nРасходы на ремонт машины: " << carRepairsCost << "руб.";
	std::cout << "\nИтого доход: " << totalSum - salaryCost - fuelCost  - taxesCost  - carRepairsCost << "руб.";*/

	//Задание 2
	/*
	int a = 42;
	int b = 153;
	std::cout << "a: " << a << "\n"; 
	std::cout << "b: " << b << "\n"; 

	//int temp = a;
	//a = b;
	//b = temp;
	std::swap(a, b);

	std::cout << "a: " << a << "\n"; 
	std::cout << "b: " << b << "\n"; */
	
	//Задание 3
	int beginHeight = 100;
	int dailyGrowth = 50;
	int nightFade = 20;
	
	int totalHeight = beginHeight + (dailyGrowth - nightFade) * 2 + dailyGrowth / 2;

	std::cout << "Высота бамбука в середине третьего дня = " << totalHeight;
}
