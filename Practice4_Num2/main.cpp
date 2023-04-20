#include "Atype.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	array1 <int> My_Int(5);

	for (int i = 0; i < 5; i++)
	{
		My_Int[i] = 5 - i;
	}

	cout << endl << "Неотсортированный массив" << endl;
	My_Int.Out();
	My_Int.Sort();
	cout << endl << "Отсортированный массив" << endl;
	My_Int.Out();

	array1 <string> My_String(5);
	My_String[0] = "Иванов";
	My_String[1] = "Петров";
	My_String[2] = "Сидоров";
	My_String[3] = "Андрейкин";
	My_String[4] = "Хорин";

	cout << endl << "Неотсортированный массив" << endl;
	My_String.Out();
	My_String.Sort(My_String[0]);
	cout << endl << "Отсортированный массив" << endl;
	My_String.Out();
}