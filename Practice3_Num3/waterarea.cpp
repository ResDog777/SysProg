#include <iostream>
#include <string>
#include "waterarea.h"

using namespace std;

WaterArea::WaterArea()
{
	name = "None";
	location = "None";
	area = 0;
	size = 0;
}

WaterArea::WaterArea(string in_name, string in_location, double in_area, double in_size)
{
	set_params(in_name, in_location, in_area, in_size);
}

void WaterArea::set_params(string in_name, string in_location, double in_area, double in_size)
{
	name = in_name;
	location = in_location;
	area = in_area;
	size = in_size;
}

string WaterArea::get_name()
{
	return name;
}

string WaterArea::get_location()
{
	return location;
}

double WaterArea::get_area()
{
	return area;
}

double WaterArea::get_size()
{
	return size;
}

ostream& operator << (ostream& os, WaterArea& waterarea)
{
	return os << "���: " << waterarea.name << "\n��������������: " << waterarea.location << "\n�������: " << waterarea.area << "\n�������: " << waterarea.size << endl;
}

istream& operator >> (istream& in, WaterArea& waterarea)
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ���" << endl;
	in >> waterarea.name;
	cout << "������� �������" << endl;
	in >> waterarea.location;
	cout << "������� �������" << endl;
	in >> waterarea.size;
	cout << "������� �������" << endl;
	in >> waterarea.area;
	return in;
}