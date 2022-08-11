//1. �������� ����������� ������� int Factorial(int n), ������� ��������� �����, � ���������� ��������� ����� �����;
//2. �������� ����������� ������� ? ? ? Power(? ? ? ), ������� �������� ����� � �������;
//3. �������� ����������� �������, ������� ������� �� ����� ��� ��������� �� ���������� �������;
//4. �������� ����������� �������, ������� ������� �� ����� �������� ���������� ����� �� ���� ���������;
//    0	1	1	2	3	5	8	13	21 .......

#include<iostream>
using namespace std;

int Factorial(int chislo, int factorial);
int Power(int chislo, int indicator, int n);

void main()
{
	setlocale(LC_ALL, "");
	
	int chislo, indicator;
	int factorial = 1;
	int n = 1;
	cout << "������� ����� ������������� �����: "; cin >> chislo;
	cout << "��������� ����� " << chislo << " = " << Factorial(chislo, factorial) << endl ;
	cout << "������� ���������� �������: "; cin >> indicator;
	cout << "����� " << chislo << " � ������� " << indicator <<" = " << Power(chislo, indicator, n) << endl;
}

int Factorial(int chislo, int factorial)
{
	if (chislo == 0)
	{
		//cout  << factorial << endl;
		return(factorial);
	}
	factorial *= chislo;
	
	//cout << endl << "��������� = " << factorial << " -- " << chislo << "\n";  //�������� ��� ����
	Factorial(chislo-1, factorial);
	//cout << "��������� = " << factorial << " -- " << chislo << "\n";          //�������� ��� ����
}

int Power(int chislo, int indicator, int n)
{
	if (indicator == 0)
	{
		return(n);
	}
	n *= chislo;
	Power(chislo, indicator - 1, n);
}