#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

    int requested;
    int nominals[] = { 5000, 2000, 1000, 500, 200, 100 };
    cout << "Введите сумму, которую хотите снять: ";
    cin >> requested;

    while (requested) {
        if (requested % 100 != 0) {
            cout << "Банкомат не может выдать такую сумму " << requested << endl;
        }
        else if (requested > 150000) {
            cout << "Лимит превышен " << requested << endl;
        }
        else {
            for (auto nominal : nominals) {
                cout << nominal << " - " << (requested / nominal) << endl;
                requested %= nominal;
            }
        }
    }
}