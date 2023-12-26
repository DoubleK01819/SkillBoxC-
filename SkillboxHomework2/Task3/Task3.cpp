#include <iostream>

int main()
{
	//Задание 3
	int beginHeight = 100;
	int dailyGrowth = 50;
	int nightFade = 20;

	int totalHeight = beginHeight + (dailyGrowth - nightFade) * 2 + dailyGrowth / 2;

	std::cout << "Высота бамбука в середине третьего дня = " << totalHeight;
}
