
#include <iostream>

int main()
{
	//Задание 2

	int a = 42;
	int b = 153;
	std::cout << "a: " << a << "\n";
	std::cout << "b: " << b << "\n";
	
	//int temp = a;
	//a = b;
	//b = temp;
	std::swap(a, b);

	std::cout << "a: " << a << "\n";
	std::cout << "b: " << b << "\n"; 
}