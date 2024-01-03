#include <iostream>

int main() {
    for (int x = 0; x <= 20; x++) {
        for (int y = 0; y <= 50; y++) {
            if (x == 10 && y == 25)
              std::cout << "+";
            if (x == 10)
                if (y == 50)
                {
                    std::cout << ">";
                }
                else
                {
                    std::cout << "-";
                }
            else if (y == 25)
                if (x == 0)
                {
                    std::cout << "^";
                }
                else
                {
                    std::cout << "|";
                }
            else
                std::cout << " ";
        }
        std::cout << "\n";
    }
}