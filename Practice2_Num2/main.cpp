#include "rational.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    int a, b;
    cout << "Введите количество дробей: " << endl;
    cin >> n;
    rational* mass = new rational[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Введите числитель и знаменатель дроби № " << i + 1 << endl;
        cin >> a >> b;
        mass[i].set(a, b);
    }
    for (int i = 0; i < n; i++)
    {
        mass[i].show(i);
    }
    delete mass;
}