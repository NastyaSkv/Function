#include"Sum.h"

template<typename T>                                                            //шаблон ф-и Sum для одномерного
T Sum(T arr[], const int n)              //сумма элементов массива 
{
	T s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}
	return(s);
}
template<typename T>                                                            //шаблон ф-и Sum для двумерного
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)              //сумма элементов массива 
{
	T s = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			s += arr[i][j];
		}cout << endl;
	}
	return(s);
}