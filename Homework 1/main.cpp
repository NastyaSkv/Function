//�������� �������: Factorial(��������� �����, � ���������� ��������� ����� �����);
//                  Power (��������� ��������� � ���������� �������, � ���������� �������);

#include<iostream>
using namespace std;

#define TASK_1
#define TASK_2

int Factorial(int number);
int Exponentiation(int basis, int indicator);

void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_1
	int number;
	cout << "������� �����: "; cin >> number;
	int f = Factorial(number);
	cout << "��������� ����� [ " << number << "! ] = " << f << endl << endl;
#endif

#ifdef TASK_2
	int basis, indicator;
	cout << "������� ��������� �����: "; cin >> basis;
	cout << "������� ���������� �������: "; cin >> indicator;
	int n = Exponentiation(basis, indicator);
	cout << "����� " << basis << " � ������� " << indicator << " = " << n << endl;
#endif
}

int Factorial(int number)
{
	int f = 1;
	for (int i = 1; i <= number; i++)f *= i;
	return(f);
}

int Exponentiation(int basis, int indicator)
{
	int n = 1;
	for (int i = 0; i < indicator; i++)n *= basis;
	return(n);
}