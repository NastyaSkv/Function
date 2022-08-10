#include"Print.h"

template<typename T> 
void Print(T arr[], const int n)           //вывод массива 
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	} cout << endl << endl;
}
template<typename T>                                                            //шаблон ф-и Print для двумерного
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)           //вывод массива 
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}cout << endl << endl;
	}
}