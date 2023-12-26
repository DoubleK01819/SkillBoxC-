#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int salaryFirstEmployee;
	int salarySecondEmployee;
	int salaryThirdEmployee;

	cout << "Введите зарплату первого сотрудника: ";
	cin >> salaryFirstEmployee;
	cout << "Введите зарплату второго сотрудника: ";
	cin >> salarySecondEmployee;
	cout << "Введите зарплату третьего сотрудника: ";
	cin >> salaryThirdEmployee;
	cout << "\n-----Считаем-----\n";

	vector<int> numbers{ salaryFirstEmployee, salarySecondEmployee, salaryThirdEmployee };
	int average = (salaryFirstEmployee + salarySecondEmployee + salaryThirdEmployee) / 3;
	auto maxSalary = max_element(begin(numbers), end(numbers));
	auto minSalary = min_element(begin(numbers), end(numbers));

	cout << "\nСамая высокая зарплата в отделе: " << *maxSalary << " руб.";
	cout << "\nРазница между самой высокой и самой низкой зарплатой в отделе: " << maxSalary[0] - minSalary[0] << " руб.";
	cout << "\nСредняя зарплата в отделе: " << average << " руб.";
}
