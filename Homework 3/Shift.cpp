#include"Shift.h"

template<typename T>                                                            //������ �-� shiftLeft ��� �����������
void shiftLeft(T arr[], const int n, int shift) //���������� �������� ������ �� �������� ����� ��������� �����
{
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[0];            //�������� ����������
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T>                                                            //������ �-� shiftLeft ��� ����������
void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //���������� �������� ������ �� �������� ����� ��������� ����� 
{
	for (int y = 0; y < shift; y++)
	{
		T buffer = arr[0][0];            //�������� ����������
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (j == COLS - 1)break;
				arr[i][j] = arr[i][j + 1];
			}
			arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

template<typename T>                                                            //������ �-� shiftRight ��� �����������
void shiftRight(T arr[], const int n, int shift) //���������� �������� ������ �� �������� ����� ��������� ������
{
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);
}
template<typename T>                                                            //������ �-� shiftRight ��� ����������
void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //���������� �������� ������ �� �������� ����� ��������� ������
{
	for (int y = 0; y < shift; y++)
	{
		T buffer = arr[ROWS - 1][COLS - 1];
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