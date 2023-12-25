#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    //Задание 1
   /* int lap = 4;
    int engine = 254;
    int wheels = 93;
    int steerinWheel = 49;
    int wind = 21;
    int rain = 17;
    int speed = engine + wheels + steerinWheel - wind - rain;

    std::cout << "===================\n";
    std::cout << "Супер гонки. Круг " << lap << "\n";
    std::cout << "===================\n";
    std::cout << "Шумахер (" << speed << ")\n";
    std::cout << "===================\n";
    std::cout << "Водитель: Шумахер\n";
    std::cout << "Скорость: " << speed << "\n";
    std::cout << "-------------------\n";
    std::cout << "Оснащение\n";
    std::cout << "Двигатель: +" << engine << "\n";
    std::cout << "Колеса: +" << wheels << "\n";
    std::cout << "Руль: +" << steerinWheel << "\n";
    std::cout << "-------------------\n";
    std::cout << "Действия плохой погоды\n";
    std::cout << "Ветер: -" << wind << "\n";
    std::cout << "Дождь: -" << rain << "\n";*/

    ////Задание 2
    //int price = 100;
    //int priceDelivery = 50;
    //int discount = 5;

    //int total = price + price - discount;

    //std::cout << "Стоимость товара = " << total;

    //Задание 3
    //int totalTimeWork = 480;
    //int timeMakesOrder = 2;
    //int timeAgreesOrder = 4;

    //int totalClient = totalTimeWork / (timeAgreesOrder + timeMakesOrder);

    //std::cout << "Эта программа рассчитает, сколько клиентов успеет обслужить кассир за смену.\n";
    //std::cout << "Введите длительность смены в минутах: " << totalTimeWork << "\n";
    //std::cout << "Сколько минут клиент делает заказ? " << timeMakesOrder << "\n";
    //std::cout << "Сколько минут кассир собирает заказ? " << timeAgreesOrder << "\n";
    //std::cout << "-----Считаем-----" << "\n";
    //std::cout << "За смену длиной " << totalTimeWork << " минут кассир успеет обслужить " << totalClient << " клиентов." << "\n";

    //Задание 4
    int totalSum = 4000000;
    int entrance = 10;
    int apartment = 40;

    int sumOnOneapartment = totalSum / (apartment * entrance);

    std::cout << "Приветствуем вас в калькуляторе квартплаты!\n";
    std::cout << "Введите сумму, указанную в квитанции: " << totalSum  << "\n";
    std::cout << "Сколько подъездов в вашем доме? " << entrance << "\n";
    std::cout << "Сколько квартир в каждом подъезде? " << apartment << "\n";
    std::cout << "-----Считаем-----" << "\n";
    std::cout << "Каждая квартира должна платить по " << sumOnOneapartment << " руб." << "\n";
}

