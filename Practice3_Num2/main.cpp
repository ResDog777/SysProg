#include <iostream>
#include "truncatedcone.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	TruncatedСone cone1;
	TruncatedСone cone2;
	Cone parentcone;

	cout << "Введите 1) Радиус нижнего основания 2) Высоту полного конуса 3) Радиус верхнего основания \n 4) Высоту усеченного конуса 5) x, y, z\n ";
	cin >> cone1;
	cout << cone1;

	cout << "\n" << endl;
	cout << "Введите 1) Радиус нижнего основания 2) Высоту полного конуса 3) Радиус верхнего основания \n 4) Высоту усеченного конуса 5) x, y, z\n ";
	cin >> cone2;
	cout << cone2;

	cout << "\n" << endl;
	cout << "cone1 > cone2: " << (cone1 > cone2 ? "Да" : "Нет") << endl;
	cout << "cone1 < cone2: " << (cone1 < cone2 ? "Да" : "Нет") << endl;
	cout << "cone1 == cone2: " << (cone1 == cone2 ? "Да" : "Нет") << endl;
	cout << "cone1 <= cone2: " << (cone1 <= cone2 ? "Да" : "Нет") << endl;
	cout << "cone1 >= cone2: " << (cone1 >= cone2 ? "Да" : "Нет") << endl;

	Cone basedcone; // Базовый конус

	cout << "Усеченный конус производный от базового конуса\n";
	TruncatedСone childcone(basedcone); 
	cout << childcone;

	TruncatedСone childcone2(basedcone, 1, 2);
	cout << childcone2;


	return 0;
}
