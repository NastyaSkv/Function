//Рекурсия (26.07.22)
#include<iostream>
using namespace std;

void elevator(int floor);

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello World";
	int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	elevator(floor);
}

void elevator(int floor)
{
	if (floor == 0)                       //условие выхода
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << " этаже\n";
	elevator(floor-1);
	cout << "Вы на " << floor << " этаже\n"; //здесь cout ничего не делает и не вызывает, 
	                                         //он просто визуализирует возвращаемые значения из стека
}