//1. Написать рекурсивную функцию int Factorial(int n), которая принимает число, и возвращает Факториал этого числа;
//2. Написать рекурсивную функцию ? ? ? Power(? ? ? ), которая возводит число в степень;
//3. Написать рекурсивную функцию, которая выводит на экран ряд Фибоначчи до указанного предела;
//4. Написать рекурсивную функцию, которая выводит на экран заданное количество чисел из ряда Фибоначчи;
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
	cout << "Введите целое положительное число: "; cin >> chislo;
	cout << "Факториал числа " << chislo << " = " << Factorial(chislo, factorial) << endl ;
	cout << "Введите показатель степени: "; cin >> indicator;
	cout << "Число " << chislo << " в степени " << indicator <<" = " << Power(chislo, indicator, n) << endl;
}

int Factorial(int chislo, int factorial)
{
	if (chislo == 0)
	{
		//cout  << factorial << endl;
		return(factorial);
	}
	factorial *= chislo;
	
	//cout << endl << "Факториал = " << factorial << " -- " << chislo << "\n";  //ПРОВЕРКА для себя
	Factorial(chislo-1, factorial);
	//cout << "Факториал = " << factorial << " -- " << chislo << "\n";          //ПРОВЕРКА для себя
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