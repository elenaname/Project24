#include <iomanip>;
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int number, multiply, i; //������ ������������� ����������
	
	cout << "������� ����� �� 1 �� 10: \n";//���������� ������������ ������ ����� ����� �� 1 �� 10
	cin >> number;

	if (number < 1 || number >10)// ��������� ��������� �� ������� �����
	{
		cout << "������� ����� �������� �����";
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
