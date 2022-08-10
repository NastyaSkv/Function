#include"Statistics.h"

template<typename T>                                                            //������ �-� minValueIn ��� �����������
T minValueIn(T arr[], const int n)       //���������� ����������� �������� �� ������� 
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return(min);
}
template<typename T>                                                            //������ �-� minValueIn ��� ����������
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)       //���������� ����������� �������� �� ������� 
{
	T min = arr[0][0];
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

template<typename T>                                                            //������ �-� maxValueIn ��� �����������
T maxValueIn(T arr[], const int n) //���������� ������������ �������� �� �������
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return(max);
}
template<typename T>                                                            //������ �-� maxValueIn ��� ����������
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS) //���������� ������������ �������� �� �������
{
	T max = arr[0][0];
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