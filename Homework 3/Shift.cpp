#include"Shift.h"
#include"Print.h"

void shiftLeft(int arr[], const int n, int shift) //циклически сдвигает массив на заданное число элементов влево
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0];            //буферная переменная
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(float arr[], const int n, int shift) //циклически сдвигает массив на заданное число элементов влево
{
	for (int i = 0; i < shift; i++)
	{
		float buffer = arr[0];            //буферная переменная
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(double arr[], const int n, int shift) //циклически сдвигает массив на заданное число элементов влево
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[0];            //буферная переменная
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(char arr[], const int n, int shift) //циклически сдвигает массив на заданное число элементов влево 
{
	for (int i = 0; i < shift; i++)
	{
		char buffer = arr[0];            //буферная переменная
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //циклически сдвигает массив на заданное число элементов влево 
{
	for (int y = 0; y < shift; y++)
	{
		int buffer = arr[0][0];            //буферная переменная
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
void shiftLeft(float arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //циклически сдвигает массив на заданное число элементов влево 
{
	for (int y = 0; y < shift; y++)
	{
		float buffer = arr[0][0];            //буферная переменная
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
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //циклически сдвигает массив на заданное число элементов влево 
{
	for (int y = 0; y < shift; y++)
	{
		double buffer = arr[0][0];            //буферная переменная
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
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //циклически сдвигает массив на заданное число элементов влево
{
	for (int y = 0; y < shift; y++)
	{
		char buffer = arr[0][0];            //буферная переменная
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

void shiftRight(int arr[], const int n, int shift) //циклически сдвигает массив на заданное число элементов вправо
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
void shiftRight(float arr[], const int n, int shift) //циклически сдвигает массив на заданное число элементов вправо
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
void shiftRight(double arr[], const int n, int shift) //циклически сдвигает массив на заданное число элементов вправо 
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
void shiftRight(char arr[], const int n, int shift) //циклически сдвигает массив на заданное число элементов вправо
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
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //циклически сдвигает массив на заданное число элементов вправо
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
void shiftRight(float arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //циклически сдвигает массив на заданное число элементов вправо
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
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //циклически сдвигает массив на заданное число элементов вправо
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
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //циклически сдвигает массив на заданное число элементов вправо
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