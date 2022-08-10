#include"Avg.h"

template<typename T>                                                            //шаблон ф-и Avg для одномерного
double Avg(T arr[], const int n)
{
	return(double)Sum(arr, n) / n;
}
template<typename T>                                                            //шаблон ф-и Avg для двумерного
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return(double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}