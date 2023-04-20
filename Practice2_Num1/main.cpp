#include "eq2.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c;
    cout << "Введите коэффициенты квадратного уравнения: " << endl;
    cin >> a >> b >> c;
    eq2 exmpl(a, b, c);
    exmpl.set(a, b, c);
    cout << "Y = " << exmpl.find_Y(exmpl.find_X()) << endl;
    cout << "Введите коэффициенты уравнения для сложения с предыдущим: " << endl;
    cin >> a >> b >> c;
    eq2 exmpl1(a, b, c);
    exmpl1.set(a, b, c);
    eq2 sum = exmpl + exmpl1;
    sum.Out();
}
