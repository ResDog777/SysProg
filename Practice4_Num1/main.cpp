#include "My_class.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x = 1;
	int y = 2;
	cout << "Перед обменом" << endl;
	OutXY(x, y);
	Swap(x, y);
	cout << "После обмена" << endl;
	OutXY(x, y);

	float x1 = 1.5;
	float y1 = 5.9;
	cout << "Перед обменом" << endl;
	OutXY(x1, y1);
	Swap(x1, y1);
	cout << "После обмена" << endl;
	OutXY(x1, y1);

	My_class t1(1, 1.5), t2(2, 9.9);
	cout << "Перед обменом" << endl;
	t1.Out();
	t2.Out();
	Swap(t1, t2);
	cout << "После обмена" << endl;
	t1.Out();
	t2.Out();
}