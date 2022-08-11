//1. Написать рекурсивную функцию int Factorial(int n), которая принимает число, и возвращает Факториал этого числа;
//2. Написать рекурсивную функцию ? ? ? Power(? ? ? ), которая возводит число в степень;
//3. Написать рекурсивную функцию, которая выводит на экран ряд Фибоначчи до указанного предела;
//4. Написать рекурсивную функцию, которая выводит на экран заданное количество чисел из ряда Фибоначчи;
//    0	1	1	2	3	5	8	13	21 .......

#include<iostream>
using namespace std;

int Factorial(int chislo, int factorial);
int Power(int chislo, int indicator, int n);
void Fibonacci_1(int limit, int a, int b);
void Fibonacci_2(int volume, int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	
	int chislo, indicator, limit, volume;
	int factorial = 1, n = 1, b = 1, a = 0;
	cout << "Введите целое положительное число: "; cin >> chislo;
	cout << "Факториал числа " << chislo << " = " << Factorial(chislo, factorial) << endl << endl;
	cout << "Введите показатель степени: "; cin >> indicator;
	cout << "Число " << chislo << " в степени " << indicator <<" = " << Power(chislo, indicator, n) << endl << endl;
	
	cout << "Введите предел, до которого будет выводиться ряд Фибоначчи: "; cin >> limit;
	Fibonacci_1(limit,a, b);
	cout << endl << "Введите количество цифр, выводимых из ряда Фибоначчи: "; cin >> volume;
	if (volume <= 2)
	{
		for (int i = 0; i < volume; i++)
		{
			cout << i << "  ";
		} return;
	}
	else Fibonacci_2(volume,a, b);
}
 
int Factorial(int chislo, int factorial)
{
	if (chislo == 0)                             //условие выхода
	{
		return(factorial);
	}
	factorial *= chislo;
	
	Factorial(chislo-1, factorial);              //рекурсия ф-ии
}

int Power(int chislo, int indicator, int n)
{
	if (indicator == 0)                          //условие выхода
	{
		return(n);
	}
	n *= chislo;
	Power(chislo, indicator - 1, n);             //рекурсия ф-ии
}

void Fibonacci_1(int limit, int a, int b)
{
	int c = a + b;
	if (c > limit)                               //условие выхода
	{
		cout << " <- Ряд Фибоначчи до " << limit << endl;
		return;
	}
	if (c == 1)
	{
		cout << a << "  " << b << "  ";
	}
	a = b;
	b = c;
	cout << c << "  ";
	Fibonacci_1(limit, a, b);                    //рекурсия ф-ии
}

void Fibonacci_2(int volume, int a, int b)
{
	if (volume == 0)                             //условие выхода
	{
		cout << " <- Ряд Фибоначчи" << endl;
		return;
	}

	int c = a + b;
	if (c == 1)
	{
		cout << a << "  " << b << "  ";
		volume -= 2;
	}
	a = b;
	b = c;
	cout << c << "  ";
	Fibonacci_2(volume-1, a, b);                //рекурсия ф-ии
}