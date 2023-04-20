#include <iostream>
#include "bay.h"
#include "ocean.h"
#include "sea.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Ocean ocean;
	cin >> ocean;
	cout << ocean;

	Bay bay;
	cin >> bay;
	cout << bay;
	bay.add_parent(ocean);

	Sea sea;
	cin >> sea;
	cout << sea;
	sea.add_parent(ocean);
	sea.add_child(bay);

	return 0;
}
