//�������� �������: Sum (���������� ����� ��������� �������);
//                  Avg (���������� �������-�������������� ��������� �������);
//                  minValueIn (���������� ����������� �������� �� �������);
//                  maxValueIn (���������� ������������ �������� �� �������);
//                  shiftLeft (���������� �������� ������ �� �������� ����� ��������� �����);
//                  shiftRight (���������� �������� ������ �� �������� ����� ��������� ������).

#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
float Avg(int arr[], const int n, int s);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, int shift);
void shiftRight(int arr[], const int n, int shift);
void Streak();

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int shift;

	FillRand(arr, n);                                                                                //�-� ����������
	Print(arr, n);                                                                                   //�-� ������
	int s = Sum(arr, n);                                                                             //�-� �����
	cout << "**1.**  ����� ��������� ������� = " << s << endl << endl;
	cout << "**2.**  ������� �������������� ��������� ������� = " << Avg(arr, n, s) << endl << endl; //�-� �������� ���������������
	int min = minValueIn(arr, n);                                                                    //�-� ���. ��������
	cout << "**3.**  ����������� �������� ������� = " << min << endl << endl;
	int max = maxValueIn(arr, n);                                                                    //�-� ����. ��������
	cout << "**4.**  ������������ �������� ������� = " << max << endl << endl;
	cout << "������� ���������� �������: "; cin >> shift;
	shiftLeft(arr, n, shift);                                                                        //�-� ������ �����
	cout << endl << "**5.**  ����� ������� �����:" << endl;
	Print(arr, n);
	Streak();
	cout << "��� \"�������\" ������������ ����������� ����� ������: " << endl;
	FillRand(arr, n);
	Print(arr, n);
	cout << "������� ���������� �������: "; cin >> shift;
	cout << endl << "**6.**  ����� ������� ������:" << endl;
	shiftRight(arr, n, shift);                                                                       //�-� ������ ������
}

void FillRand(int arr[], const int n)        //���������� ������� ���������� �������
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n)           //����� �������
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	} cout << endl << endl;
}

int Sum(int arr[], const int n)              //����� ��������� �������
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}
	return(s);
}

float Avg(int arr[], const int n, int s)
{
	return(s / (float)n);
}

int minValueIn(int arr[], const int n)       //���������� ����������� �������� �� �������
{
	int min = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return(min);
}

int maxValueIn(int arr[], const int n) //���������� ������������ �������� �� �������
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return(max);
}

void shiftLeft(int arr[], const int n, int shift) //���������� �������� ������ �� �������� ����� ��������� �����
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0];            //�������� ����������
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void shiftRight(int arr[], const int n, int shift) //���������� �������� ������ �� �������� ����� ��������� ������
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);
}

void Streak()
{
	string p = "- - - - - - - - - - - - - - - - - - - - -";
	cout << p << endl << p << endl << endl;
}