#include <iomanip>;
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int number, multiply, i; //задаем целочисленные переменные
	
	cout << "¬ведите число от 1 до 10: \n";//предлагаем пользователю ввести любое число от 1 до 10
	cin >> number;

	if (number < 1 || number >10)// провер€ем правильно ли введено число
	{
		cout << "Ќеверно задан параметр числа";
		return 0;
	}
	for (i = 1; i <= 10; i++)
	{

		multiply = number * i;
		cout << "\n";
		cout << number << "*" << i << "=" << multiply;
	}
	

	return 0;

}
