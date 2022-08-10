//�������� ������������� ������� ��� ������ � ����������� � ���������� ���������
// ���� int, float, double � char:: 
//                  Sum (���������� ����� ��������� �������);
//                  Avg (���������� �������-�������������� ��������� �������);
//                  minValueIn (���������� ����������� �������� �� �������);
//                  maxValueIn (���������� ������������ �������� �� �������);
//                  shiftLeft (���������� �������� ������ �� �������� ����� ��������� �����);
//                  shiftRight (���������� �������� ������ �� �������� ����� ��������� ������).

#include<iostream>
using namespace std;

#define tab "\t"
#define qw "- - - - - - - - -"
#define ONE_INT
#define ONE_FLOAT
#define ONE_DOUBLE
#define ONE_CHAR
#define TWO_INT
#define TWO_FLOAT
#define TWO_DOUBLE
#define TWO_CHAR

const int ROWS = 2;
const int COLS = 5;

void FillRand(int arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(float arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
float Sum(float arr[], const int n);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
float Avg(float arr[], const int n);
double Avg(double arr[], const int n);
char Avg(char arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
float Avg(float arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);
float minValueIn(float arr[], const int n);
double minValueIn(double arr[], const int n);
char minValueIn(char arr[], const int n);
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
float minValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[], const int n);
float maxValueIn(float arr[], const int n);
double maxValueIn(double arr[], const int n);
char maxValueIn(char arr[], const int n);
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
float maxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, int shift);
void shiftLeft(float arr[], const int n, int shift);
void shiftLeft(double arr[], const int n, int shift);
void shiftLeft(char arr[], const int n, int shift);
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
void shiftLeft(float arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

void shiftRight(int arr[], const int n, int shift);
void shiftRight(float arr[], const int n, int shift);
void shiftRight(double arr[], const int n, int shift);
void shiftRight(char arr[], const int n, int shift);
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
void shiftRight(float arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

void Streak();

void main()
{
	setlocale(LC_ALL, "");
	int shift;

	const int n = 10;
	int arr[n];

	const int w = 9;
	float crr[w];

	const int m = 8;
	double brr[m];

	const int t = 7;
	char vrr[t];

	int drr[ROWS][COLS];
	float trr[ROWS][COLS];
	double yrr[ROWS][COLS];
	char urr[ROWS][COLS];

	cout << tab << tab << "���������� �������" << endl << endl;

#ifdef ONE_INT
	cout << qw "->   INT   <-" << qw << endl;
	FillRand(arr, n);                                                                                //�-� ���������� int
	Print(arr, n);                                                                                   //�-� ������                                                                            //�-� �����
	cout << "**1.**  ����� ��������� ������� = " << Sum(arr, n) << endl << endl;                     //�-� �����     
	cout << "**2.**  ������� �������������� ��������� ������� = " << Avg(arr, n) << endl << endl;    //�-� �������� ���������������                                                                 
	cout << "**3.**  ����������� �������� ������� = " << minValueIn(arr, n) << endl << endl;         //�-� ���. ��������                                                             
	cout << "**4.**  ������������ �������� ������� = " << maxValueIn(arr, n) << endl << endl;        //�-� ����. ��������
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
#endif

#ifdef ONE_FLOAT
	cout << qw "->   FLOAT   <-" << qw << endl;
	FillRand(crr, w);                                                                                //�-� ���������� int
	Print(crr, w);                                                                                   //�-� ������                                                                            //�-� �����
	cout << "**1.**  ����� ��������� ������� = " << Sum(crr, w) << endl << endl;                     //�-� �����   
	cout << "**2.**  ������� �������������� ��������� ������� = " << Avg(crr, w) << endl << endl;    //�-� �������� ���������������                                                               
	cout << "**3.**  ����������� �������� ������� = " << minValueIn(crr, w) << endl << endl;         //�-� ���. ��������                                                          
	cout << "**4.**  ������������ �������� ������� = " << maxValueIn(crr, w) << endl << endl;        //�-� ����. ��������
	cout << "������� ���������� �������: "; cin >> shift;
	shiftLeft(crr, w, shift);                                                                        //�-� ������ �����
	cout << endl << "**5.**  ����� ������� �����:" << endl;
	Print(crr, w);
	Streak();
	cout << "��� \"�������\" ������������ ����������� ����� ������: " << endl;
	FillRand(crr, w);
	Print(crr, w);
	cout << "������� ���������� �������: "; cin >> shift;
	cout << endl << "**6.**  ����� ������� ������:" << endl;
	shiftRight(crr, w, shift);                                                                       //�-� ������ ������
#endif

#ifdef ONE_DOUBLE
	cout << qw "->  DOUBLE   <-" << qw << endl;
	FillRand(brr, m);                                                                                 //�-� ���������� double
	Print(brr, m);                                                                                    //�-� ������                                                                         
	cout << "**1.**  ����� ��������� ������� = " << Sum(brr, m) << endl << endl;                      //�-� �����
	cout << "**2.**  ������� �������������� ��������� ������� = " << Avg(brr, m) << endl << endl;     //�-� �������� ���������������                                                             
	cout << "**3.**  ����������� �������� ������� = " << minValueIn(brr, m) << endl << endl;          //�-� ���.��������                                                                  
	cout << "**4.**  ������������ �������� ������� = " << maxValueIn(brr, m) << endl << endl;         //�-� ����. ��������
	cout << "������� ���������� �������: "; cin >> shift;
	shiftLeft(brr, m, shift);                                                                         //�-� ������ �����
	cout << endl << "**5.**  ����� ������� �����:" << endl;
	Print(brr, m);
	Streak();
	cout << "��� \"�������\" ������������ ����������� ����� ������: " << endl;
	FillRand(brr, m);
	Print(brr, m);
	cout << "������� ���������� �������: "; cin >> shift;
	cout << endl << "**6.**  ����� ������� ������:" << endl;
	shiftRight(brr, m, shift);                                                                        //�-� ������ ������
#endif

#ifdef ONE_CHAR
	cout << qw "->   CHAR   <-" << qw << endl;
	FillRand(vrr, t);                                                                                 //�-� ���������� int
	Print(vrr, t);                                                                                    //�-� ������                                                                            //�-� �����
	cout << "**1.**  ����� ��������� ������� = " << Sum(vrr, t) << endl << endl;                      //�-� �����   
	cout << "**2.**  ������� �������������� ��������� ������� = " << Avg(vrr, t) << endl << endl;     //�-� �������� ���������������                                                                  
	cout << "**3.**  ����������� �������� ������� = " << minValueIn(vrr, t) << endl << endl;          //�-� ���. ��������                                                                   
	cout << "**4.**  ������������ �������� ������� = " << maxValueIn(vrr, t) << endl << endl;         //�-� ����. ��������
	cout << "������� ���������� �������: "; cin >> shift;
	shiftLeft(vrr, t, shift);                                                                         //�-� ������ �����
	cout << endl << "**5.**  ����� ������� �����:" << endl;
	Print(vrr, t);
	Streak();
	cout << "��� \"�������\" ������������ ����������� ����� ������: " << endl;
	FillRand(vrr, t);
	Print(vrr, t);
	cout << "������� ���������� �������: "; cin >> shift;
	cout << endl << "**6.**  ����� ������� ������:" << endl;
	shiftRight(vrr, t, shift);
#endif

	cout << tab << tab << "��������� �������" << endl << endl;

#ifdef TWO_INT
	cout << qw "->   INT   <-" << qw << endl;
	FillRand(drr, ROWS, COLS);                                                                           //�-� ���������� int
	Print(drr, ROWS, COLS);                                                                                  //�-� ������                                                                            //�-� �����
	cout << "**1.**  ����� ��������� ������� = " << Sum(drr, ROWS, COLS);
	cout << "**2.**  ������� �������������� ��������� ������� = " << Avg(drr, ROWS, COLS) << endl << endl; //�-� �������� ���������������                                                                   
	cout << "**3.**  ����������� �������� ������� = " << minValueIn(drr, ROWS, COLS) << endl << endl;               //�-� ���. ��������
	cout << "**4.**  ������������ �������� ������� = " << maxValueIn(drr, ROWS, COLS) << endl << endl;              //�-� ����. ��������
	cout << "������� ���������� �������: "; cin >> shift;
	shiftLeft(drr, ROWS, COLS, shift);                                                                              //�-� ������ �����
	cout << endl << "**5.**  ����� ������� �����:" << endl;
	Print(drr, ROWS, COLS);
	Streak();
	cout << "��� \"�������\" ������������ ����������� ����� ������: " << endl;
	FillRand(drr, ROWS, COLS);                                                                           //�-� ���������� int
	Print(drr, ROWS, COLS);
	cout << "������� ���������� �������: "; cin >> shift;
	cout << endl << "**6.**  ����� ������� ������:" << endl;
	shiftRight(drr, ROWS, COLS, shift);
#endif

#ifdef TWO_FLOAT
	cout << qw "->   FLOAT   <-" << qw << endl;
	FillRand(trr, ROWS, COLS);                                                                           //�-� ���������� int
	Print(trr, ROWS, COLS);                                                                                  //�-� ������                                                                            //�-� �����
	cout << "**1.**  ����� ��������� ������� = " << Sum(trr, ROWS, COLS);
	cout << "**2.**  ������� �������������� ��������� ������� = " << Avg(trr, ROWS, COLS) << endl << endl; //�-� �������� ���������������                                                                   
	cout << "**3.**  ����������� �������� ������� = " << minValueIn(trr, ROWS, COLS) << endl << endl;               //�-� ���. ��������
	cout << "**4.**  ������������ �������� ������� = " << maxValueIn(trr, ROWS, COLS) << endl << endl;              //�-� ����. ��������
	cout << "������� ���������� �������: "; cin >> shift;
	shiftLeft(trr, ROWS, COLS, shift);                                                                              //�-� ������ �����
	cout << endl << "**5.**  ����� ������� �����:" << endl;
	Print(trr, ROWS, COLS);
	Streak();
	cout << "��� \"�������\" ������������ ����������� ����� ������: " << endl;
	FillRand(trr, ROWS, COLS);                                                                           //�-� ���������� int
	Print(trr, ROWS, COLS);
	cout << "������� ���������� �������: "; cin >> shift;
	cout << endl << "**6.**  ����� ������� ������:" << endl;
	shiftRight(trr, ROWS, COLS, shift);
#endif

#ifdef TWO_DOUBLE
	cout << qw "->   DOUBLE   <-" << qw << endl;
	FillRand(yrr, ROWS, COLS);                                                                           //�-� ���������� int
	Print(yrr, ROWS, COLS);                                                                                  //�-� ������                                                                            //�-� �����
	cout << "**1.**  ����� ��������� ������� = " << Sum(yrr, ROWS, COLS);
	cout << "**2.**  ������� �������������� ��������� ������� = " << Avg(yrr, ROWS, COLS) << endl << endl; //�-� �������� ���������������                                                                   
	cout << "**3.**  ����������� �������� ������� = " << minValueIn(yrr, ROWS, COLS) << endl << endl;               //�-� ���. ��������
	cout << "**4.**  ������������ �������� ������� = " << maxValueIn(yrr, ROWS, COLS) << endl << endl;              //�-� ����. ��������
	cout << "������� ���������� �������: "; cin >> shift;
	shiftLeft(yrr, ROWS, COLS, shift);                                                                              //�-� ������ �����
	cout << endl << "**5.**  ����� ������� �����:" << endl;
	Print(yrr, ROWS, COLS);
	Streak();
	cout << "��� \"�������\" ������������ ����������� ����� ������: " << endl;
	FillRand(yrr, ROWS, COLS);                                                                           //�-� ���������� int
	Print(yrr, ROWS, COLS);
	cout << "������� ���������� �������: "; cin >> shift;
	cout << endl << "**6.**  ����� ������� ������:" << endl;
	shiftRight(yrr, ROWS, COLS, shift);
#endif

#ifdef TWO_CHAR
	cout << qw "->   CHAR   <-" << qw << endl;
	FillRand(urr, ROWS, COLS);                                                                           //�-� ���������� int
	Print(urr, ROWS, COLS);                                                                                  //�-� ������                                                                            //�-� �����
	cout << "**1.**  ����� ��������� ������� = " << Sum(urr, ROWS, COLS);
	cout << "**2.**  ������� �������������� ��������� ������� = " << Avg(urr, ROWS, COLS) << endl << endl; //�-� �������� ���������������                                                                   
	cout << "**3.**  ����������� �������� ������� = " << minValueIn(urr, ROWS, COLS) << endl << endl;               //�-� ���. ��������
	cout << "**4.**  ������������ �������� ������� = " << maxValueIn(urr, ROWS, COLS) << endl << endl;              //�-� ����. ��������
	cout << "������� ���������� �������: "; cin >> shift;
	shiftLeft(urr, ROWS, COLS, shift);                                                                              //�-� ������ �����
	cout << endl << "**5.**  ����� ������� �����:" << endl;
	Print(urr, ROWS, COLS);
	Streak();
	cout << "��� \"�������\" ������������ ����������� ����� ������: " << endl;
	FillRand(urr, ROWS, COLS);                                                                           //�-� ���������� int
	Print(urr, ROWS, COLS);
	cout << "������� ���������� �������: "; cin >> shift;
	cout << endl << "**6.**  ����� ������� ������:" << endl;
	shiftRight(urr, ROWS, COLS, shift);
#endif
}

void FillRand(int arr[], const int n)        //���������� ������� ���������� �������
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(float arr[], const int n)        //���������� ������� ���������� �������
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 1000;
	}
}
void FillRand(double arr[], const int n)        //���������� ������� ���������� �������
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 1000;
	}
}
void FillRand(char arr[], const int n)        //���������� �������  ���������� ������� 
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 1000;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 1000;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
		}
	}
}

void Print(int arr[], const int n)           //����� ������� 
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	} cout << endl << endl;
}
void Print(float arr[], const int n)           //����� ������� 
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	} cout << endl << endl;
}
void Print(double arr[], const int n)           //����� ������� 
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	} cout << endl << endl;
}
void Print(char arr[], const int n)           //����� ������� 
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	} cout << endl << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)           //����� ������� 
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}cout << endl << endl;
	}
}
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS)           //����� ������� 
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}cout << endl << endl;
	}
}
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)           //����� ������� 
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}cout << endl << endl;
	}
}
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)           //����� ������� 
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}cout << endl << endl;
	}
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
float Sum(float arr[], const int n)              //����� ��������� ������� 
{
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}
	return(s);
}
double Sum(double arr[], const int n)              //����� ��������� ������� 
{
	double s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}
	return(s);
}
char Sum(char arr[], const int n)              //����� ��������� ������� 
{
	char s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}
	return(s);
}
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)              //����� ��������� ������� 
{
	int s = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			s += arr[i][j];
		}cout << endl;
	}
	return(s);
}
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS)              //����� ��������� ������� 
{
	float s = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			s += arr[i][j];
		}cout << endl;
	}
	return(s);
}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)              //����� ��������� ������� 
{
	double s = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			s += arr[i][j];
		}cout << endl;
	}
	return(s);
}
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)              //����� ��������� ������� 
{
	char s = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			s += arr[i][j];
		}cout << endl;
	}
	return(s);
}

double Avg(int arr[], const int n)
{
	return(double)Sum(arr, n) / n;
}
float Avg(float arr[], const int n)
{
	return(float)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return(double)Sum(arr, n) / n;
}
char Avg(char arr[], const int n)
{
	return(char)Sum(arr, n) / n;
}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return(double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
float Avg(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return(float)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return(double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return(char)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

int minValueIn(int arr[], const int n)       //���������� ����������� �������� �� ������� 
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return(min);
}
float minValueIn(float arr[], const int n)       //���������� ����������� �������� �� ������� 
{
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return(min);
}
double minValueIn(double arr[], const int n)       //���������� ����������� �������� �� ������� 
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return(min);
}
char minValueIn(char arr[], const int n)       //���������� ����������� �������� �� ������� 
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return(min);
}
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)       //���������� ����������� �������� �� ������� 
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)

		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return(min);
}
float minValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)       //���������� ����������� �������� �� ������� 
{
	float min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)

		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return(min);
}
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)       //���������� ����������� �������� �� ������� 
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)

		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return(min);
}
char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)       //���������� ����������� �������� �� �������
{
	char min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)

		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return(min);
}

int maxValueIn(int arr[], const int n) //���������� ������������ �������� �� �������
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return(max);
}
float maxValueIn(float arr[], const int n) //���������� ������������ �������� �� �������
{
	float max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return(max);
}
double maxValueIn(double arr[], const int n) //���������� ������������ �������� �� �������
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return(max);
}
char maxValueIn(char arr[], const int n) //���������� ������������ �������� �� �������
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return(max);
}
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS) //���������� ������������ �������� �� �������
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return(max);
}
float maxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS) //���������� ������������ �������� �� �������
{
	float max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return(max);
}
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS) //���������� ������������ �������� �� �������
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return(max);
}
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS) //���������� ������������ �������� �� �������
{
	char max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
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
void shiftLeft(float arr[], const int n, int shift) //���������� �������� ������ �� �������� ����� ��������� �����
{
	for (int i = 0; i < shift; i++)
	{
		float buffer = arr[0];            //�������� ����������
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(double arr[], const int n, int shift) //���������� �������� ������ �� �������� ����� ��������� �����
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[0];            //�������� ����������
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(char arr[], const int n, int shift) //���������� �������� ������ �� �������� ����� ��������� ����� 
{
	for (int i = 0; i < shift; i++)
	{
		char buffer = arr[0];            //�������� ����������
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //���������� �������� ������ �� �������� ����� ��������� ����� 
{
	for (int y = 0; y < shift; y++)
	{
		int buffer = arr[0][0];            //�������� ����������
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (j == COLS - 1) { break; }
				arr[i][j] = arr[i][j + 1];
			}
			arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void shiftLeft(float arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //���������� �������� ������ �� �������� ����� ��������� ����� 
{
	for (int y = 0; y < shift; y++)
	{
		float buffer = arr[0][0];            //�������� ����������
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (j == COLS - 1) { break; }
				arr[i][j] = arr[i][j + 1];
			}
			arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //���������� �������� ������ �� �������� ����� ��������� ����� 
{
	for (int y = 0; y < shift; y++)
	{
		double buffer = arr[0][0];            //�������� ����������
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (j == COLS - 1) { break; }
				arr[i][j] = arr[i][j + 1];
			}
			arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //���������� �������� ������ �� �������� ����� ��������� �����
{
	for (int y = 0; y < shift; y++)
	{
		char buffer = arr[0][0];            //�������� ����������
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (j == COLS - 1) { break; }
				arr[i][j] = arr[i][j + 1];
			}
			arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
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
void shiftRight(float arr[], const int n, int shift) //���������� �������� ������ �� �������� ����� ��������� ������
{
	for (int i = 0; i < shift; i++)
	{
		float buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);
}
void shiftRight(double arr[], const int n, int shift) //���������� �������� ������ �� �������� ����� ��������� ������ 
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);
}
void shiftRight(char arr[], const int n, int shift) //���������� �������� ������ �� �������� ����� ��������� ������
{
	for (int i = 0; i < shift; i++)
	{
		char buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);
}
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //���������� �������� ������ �� �������� ����� ��������� ������
{
	for (int y = 0; y < shift; y++)
	{
		int buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				if (j == 0) { break; }
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = arr[i - 1][COLS - 1];
		}
		arr[0][0] = buffer;
	}
	Print(arr, ROWS, COLS);
}
void shiftRight(float arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //���������� �������� ������ �� �������� ����� ��������� ������
{
	for (int y = 0; y < shift; y++)
	{
		float buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				if (j == 0) { break; }
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = arr[i - 1][COLS - 1];
		}
		arr[0][0] = buffer;
	}
	Print(arr, ROWS, COLS);
}
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //���������� �������� ������ �� �������� ����� ��������� ������
{
	for (int y = 0; y < shift; y++)
	{
		double buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				if (j == 0) { break; }
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = arr[i - 1][COLS - 1];
		}
		arr[0][0] = buffer;
	}
	Print(arr, ROWS, COLS);
}
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //���������� �������� ������ �� �������� ����� ��������� ������
{
	for (int y = 0; y < shift; y++)
	{
		char buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				if (j == 0) { break; }
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = arr[i - 1][COLS - 1];
		}
		arr[0][0] = buffer;
	}
	Print(arr, ROWS, COLS);
}

void Streak()
{
	string p = "- - - - - - - - - - - - - - - - - - - - -";
	cout << p << endl << p << endl << endl;
}