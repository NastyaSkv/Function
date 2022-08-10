//Functions

#include<iostream>
using namespace std;

int Add(int a, int b); //�������� �������
int Sub(int a, int b); //����� �� �������, ��� ����� ������� ����
int Mul(int a, int b); //���������� ������� (����������� ������� - Function definition)
double Div(int a, int b);
int Factorial(int n);

void main()
{
	setlocale(LC_ALL, "");

	//��������� �������:
	   /*type name(parameters)
	   {
			...;
			group - of - statements;
			...;
	   }*/

	int a, b;
	cout << "������� 2 �����: "; cin >> a >> b;
	int c = Add(a, b); //������������� ������� (����� ������� - function call)
	//����������� ���������� � �������� �������
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl; //������ ������� �� ����������, � ���� �������
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	//cout << << Factorial << endl;
}

int Add(int a, int b) //������� �������� 2� ����� a � b
{
	int sum = a + b;
	return(sum);        //����� ������� ���������� �������� �����
}
int Sub(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

double Div(int a, int b)
{
	return (double)a / b; //�������� int �� double, ����� ������� �������� � �������
}

int Factorial(int n)
{
	int f = 1;
	for (int i = 0; i <= n; i++)
	{
		f *= i;
	}
	return(f);
}