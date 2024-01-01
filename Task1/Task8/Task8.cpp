#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    
    int secretNumber;
    int guess;
    int attempts = 0;

    cout << "Давай поиграем в игру 'Угадай число'! Загадай число от 1 до 100, а я попробую угадать." << endl;

    cout << "Загадай число: ";
    cin >> secretNumber;

    int minRange = 0;
    int maxRange = 63;

    do {
        guess = (minRange + maxRange) / 2;
        attempts++;

        if (guess < secretNumber) {
            cout << "Мое число " << guess << " меньше." << endl;
            minRange = guess + 1;
        }
        else if (guess > secretNumber) {
            cout << "Мое число " << guess << " больше." << endl;
            maxRange = guess - 1;
        }
        else {
            cout << "Поздравляю! Я угадал число " << secretNumber << " за " << attempts << " попыток!" << endl;
            break;
        }

        if (attempts == 7) {
            cout << "У меня закончились попытки. Я не смог угадать число." << endl;
            break;
        }
    } while (attempts < 7);
}