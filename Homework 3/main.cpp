//домашнее задание Homework 3 из из ветки master разделяем на файлы.h и.cpp

#include"FillRand.h"
#include"Print.h"
#include"Statistics.h"
#include"Shift.h"

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

	cout << tab << tab << "ОДНОМЕРНЫЕ МАССИВЫ" << endl << endl;

#ifdef ONE_INT
	cout << qw "->   INT   <-" << qw << endl;
	FillRand(arr, n);                                                                                //ф-я заполнения int
	Print(arr, n);                                                                                   //ф-я вызова                                                                            //ф-я суммы
	cout << "**1.**  Сумма элементов массива = " << Sum(arr, n) << endl << endl;                     //ф-я суммы     
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(arr, n) << endl << endl;    //ф-я среднего арифметического                                                                 
	cout << "**3.**  Минимальное значение массива = " << minValueIn(arr, n) << endl << endl;         //ф-я мин. значения                                                             
	cout << "**4.**  Максимальное значение массива = " << maxValueIn(arr, n) << endl << endl;        //ф-я макс. значения
	cout << "Введите количество сдвигов: "; cin >> shift;
	shiftLeft(arr, n, shift);                                                                        //ф-я сдвига влево
	cout << endl << "**5.**  Сдвиг массива влево:" << endl;
	Print(arr, n);
	Streak();
	cout << "Для \"чистоты\" эксперимента сгенерируем новый массив: " << endl;
	FillRand(arr, n);
	Print(arr, n);
	cout << "Введите количество сдвигов: "; cin >> shift;
	cout << endl << "**6.**  Сдвиг массива вправо:" << endl;
	shiftRight(arr, n, shift);                                                                       //ф-я сдвига вправо
#endif

#ifdef ONE_FLOAT
	cout << qw "->   FLOAT   <-" << qw << endl;
	FillRand(crr, w);                                                                                //ф-я заполнения int
	Print(crr, w);                                                                                   //ф-я вызова                                                                            //ф-я суммы
	cout << "**1.**  Сумма элементов массива = " << Sum(crr, w) << endl << endl;                     //ф-я суммы   
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(crr, w) << endl << endl;    //ф-я среднего арифметического                                                               
	cout << "**3.**  Минимальное значение массива = " << minValueIn(crr, w) << endl << endl;         //ф-я мин. значения                                                          
	cout << "**4.**  Максимальное значение массива = " << maxValueIn(crr, w) << endl << endl;        //ф-я макс. значения
	cout << "Введите количество сдвигов: "; cin >> shift;
	shiftLeft(crr, w, shift);                                                                        //ф-я сдвига влево
	cout << endl << "**5.**  Сдвиг массива влево:" << endl;
	Print(crr, w);
	Streak();
	cout << "Для \"чистоты\" эксперимента сгенерируем новый массив: " << endl;
	FillRand(crr, w);
	Print(crr, w);
	cout << "Введите количество сдвигов: "; cin >> shift;
	cout << endl << "**6.**  Сдвиг массива вправо:" << endl;
	shiftRight(crr, w, shift);                                                                       //ф-я сдвига вправо
#endif

#ifdef ONE_DOUBLE
	cout << qw "->  DOUBLE   <-" << qw << endl;
	FillRand(brr, m);                                                                                 //ф-я заполнения double
	Print(brr, m);                                                                                    //ф-я вызова                                                                         
	cout << "**1.**  Сумма элементов массива = " << Sum(brr, m) << endl << endl;                      //ф-я суммы
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(brr, m) << endl << endl;     //ф-я среднего арифметического                                                             
	cout << "**3.**  Минимальное значение массива = " << minValueIn(brr, m) << endl << endl;          //ф-я мин.значения                                                                  
	cout << "**4.**  Максимальное значение массива = " << maxValueIn(brr, m) << endl << endl;         //ф-я макс. значения
	cout << "Введите количество сдвигов: "; cin >> shift;
	shiftLeft(brr, m, shift);                                                                         //ф-я сдвига влево
	cout << endl << "**5.**  Сдвиг массива влево:" << endl;
	Print(brr, m);
	Streak();
	cout << "Для \"чистоты\" эксперимента сгенерируем новый массив: " << endl;
	FillRand(brr, m);
	Print(brr, m);
	cout << "Введите количество сдвигов: "; cin >> shift;
	cout << endl << "**6.**  Сдвиг массива вправо:" << endl;
	shiftRight(brr, m, shift);                                                                        //ф-я сдвига вправо
#endif

#ifdef ONE_CHAR
	cout << qw "->   CHAR   <-" << qw << endl;
	FillRand(vrr, t);                                                                                 //ф-я заполнения int
	Print(vrr, t);                                                                                    //ф-я вызова                                                                            //ф-я суммы
	cout << "**1.**  Сумма элементов массива = " << Sum(vrr, t) << endl << endl;                      //ф-я суммы   
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(vrr, t) << endl << endl;     //ф-я среднего арифметического                                                                  
	cout << "**3.**  Минимальное значение массива = " << minValueIn(vrr, t) << endl << endl;          //ф-я мин. значения                                                                   
	cout << "**4.**  Максимальное значение массива = " << maxValueIn(vrr, t) << endl << endl;         //ф-я макс. значения
	cout << "Введите количество сдвигов: "; cin >> shift;
	shiftLeft(vrr, t, shift);                                                                         //ф-я сдвига влево
	cout << endl << "**5.**  Сдвиг массива влево:" << endl;
	Print(vrr, t);
	Streak();
	cout << "Для \"чистоты\" эксперимента сгенерируем новый массив: " << endl;
	FillRand(vrr, t);
	Print(vrr, t);
	cout << "Введите количество сдвигов: "; cin >> shift;
	cout << endl << "**6.**  Сдвиг массива вправо:" << endl;
	shiftRight(vrr, t, shift);
#endif

	cout << tab << tab << "ДВУМЕРНЫЕ МАССИВЫ" << endl << endl;

#ifdef TWO_INT
	cout << qw "->   INT   <-" << qw << endl;
	FillRand(drr, ROWS, COLS);                                                                           //ф-я заполнения int
	Print(drr, ROWS, COLS);                                                                                  //ф-я вызова                                                                            //ф-я суммы
	cout << "**1.**  Сумма элементов массива = " << Sum(drr, ROWS, COLS);
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(drr, ROWS, COLS) << endl << endl; //ф-я среднего арифметического                                                                   
	cout << "**3.**  Минимальное значение массива = " << minValueIn(drr, ROWS, COLS) << endl << endl;               //ф-я мин. значения
	cout << "**4.**  Максимальное значение массива = " << maxValueIn(drr, ROWS, COLS) << endl << endl;              //ф-я макс. значения
	cout << "Введите количество сдвигов: "; cin >> shift;
	shiftLeft(drr, ROWS, COLS, shift);                                                                              //ф-я сдвига влево
	cout << endl << "**5.**  Сдвиг массива влево:" << endl;
	Print(drr, ROWS, COLS);
	Streak();
	cout << "Для \"чистоты\" эксперимента сгенерируем новый массив: " << endl;
	FillRand(drr, ROWS, COLS);                                                                           //ф-я заполнения int
	Print(drr, ROWS, COLS);
	cout << "Введите количество сдвигов: "; cin >> shift;
	cout << endl << "**6.**  Сдвиг массива вправо:" << endl;
	shiftRight(drr, ROWS, COLS, shift);
#endif

#ifdef TWO_FLOAT
	cout << qw "->   FLOAT   <-" << qw << endl;
	FillRand(trr, ROWS, COLS);                                                                           //ф-я заполнения int
	Print(trr, ROWS, COLS);                                                                                  //ф-я вызова                                                                            //ф-я суммы
	cout << "**1.**  Сумма элементов массива = " << Sum(trr, ROWS, COLS);
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(trr, ROWS, COLS) << endl << endl; //ф-я среднего арифметического                                                                   
	cout << "**3.**  Минимальное значение массива = " << minValueIn(trr, ROWS, COLS) << endl << endl;               //ф-я мин. значения
	cout << "**4.**  Максимальное значение массива = " << maxValueIn(trr, ROWS, COLS) << endl << endl;              //ф-я макс. значения
	cout << "Введите количество сдвигов: "; cin >> shift;
	shiftLeft(trr, ROWS, COLS, shift);                                                                              //ф-я сдвига влево
	cout << endl << "**5.**  Сдвиг массива влево:" << endl;
	Print(trr, ROWS, COLS);
	Streak();
	cout << "Для \"чистоты\" эксперимента сгенерируем новый массив: " << endl;
	FillRand(trr, ROWS, COLS);                                                                           //ф-я заполнения int
	Print(trr, ROWS, COLS);
	cout << "Введите количество сдвигов: "; cin >> shift;
	cout << endl << "**6.**  Сдвиг массива вправо:" << endl;
	shiftRight(trr, ROWS, COLS, shift);
#endif

#ifdef TWO_DOUBLE
	cout << qw "->   DOUBLE   <-" << qw << endl;
	FillRand(yrr, ROWS, COLS);                                                                           //ф-я заполнения int
	Print(yrr, ROWS, COLS);                                                                                  //ф-я вызова                                                                            //ф-я суммы
	cout << "**1.**  Сумма элементов массива = " << Sum(yrr, ROWS, COLS);
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(yrr, ROWS, COLS) << endl << endl; //ф-я среднего арифметического                                                                   
	cout << "**3.**  Минимальное значение массива = " << minValueIn(yrr, ROWS, COLS) << endl << endl;               //ф-я мин. значения
	cout << "**4.**  Максимальное значение массива = " << maxValueIn(yrr, ROWS, COLS) << endl << endl;              //ф-я макс. значения
	cout << "Введите количество сдвигов: "; cin >> shift;
	shiftLeft(yrr, ROWS, COLS, shift);                                                                              //ф-я сдвига влево
	cout << endl << "**5.**  Сдвиг массива влево:" << endl;
	Print(yrr, ROWS, COLS);
	Streak();
	cout << "Для \"чистоты\" эксперимента сгенерируем новый массив: " << endl;
	FillRand(yrr, ROWS, COLS);                                                                           //ф-я заполнения int
	Print(yrr, ROWS, COLS);
	cout << "Введите количество сдвигов: "; cin >> shift;
	cout << endl << "**6.**  Сдвиг массива вправо:" << endl;
	shiftRight(yrr, ROWS, COLS, shift);
#endif

#ifdef TWO_CHAR
	cout << qw "->   CHAR   <-" << qw << endl;
	FillRand(urr, ROWS, COLS);                                                                           //ф-я заполнения int
	Print(urr, ROWS, COLS);                                                                                  //ф-я вызова                                                                            //ф-я суммы
	cout << "**1.**  Сумма элементов массива = " << Sum(urr, ROWS, COLS);
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(urr, ROWS, COLS) << endl << endl; //ф-я среднего арифметического                                                                   
	cout << "**3.**  Минимальное значение массива = " << minValueIn(urr, ROWS, COLS) << endl << endl;               //ф-я мин. значения
	cout << "**4.**  Максимальное значение массива = " << maxValueIn(urr, ROWS, COLS) << endl << endl;              //ф-я макс. значения
	cout << "Введите количество сдвигов: "; cin >> shift;
	shiftLeft(urr, ROWS, COLS, shift);                                                                              //ф-я сдвига влево
	cout << endl << "**5.**  Сдвиг массива влево:" << endl;
	Print(urr, ROWS, COLS);
	Streak();
	cout << "Для \"чистоты\" эксперимента сгенерируем новый массив: " << endl;
	FillRand(urr, ROWS, COLS);                                                                           //ф-я заполнения int
	Print(urr, ROWS, COLS);
	cout << "Введите количество сдвигов: "; cin >> shift;
	cout << endl << "**6.**  Сдвиг массива вправо:" << endl;
	shiftRight(urr, ROWS, COLS, shift);
#endif
}