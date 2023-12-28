#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int speed;
    int height;

    cout << "Введите скорость самолета: ";
    cin >> speed;
    cout << "Введите высоту полета самолета: ";

    if (speed >= 750)
    {
        if (speed <= 850) cout << "Скорость в пределах нормы";
        else cout << "Скорость слишком высокая";
    }

    else
    {
        cout << "Скорость слишком низкая";
    }

    if (height >= 9000)
    {
        if (speed <= 9500) cout << "Высота в пределах нормы";
        else cout << "Самолет летит слишком высоко";
    }

    else
    {
        cout << "Самолет летит слишком низкая";
    }
}

