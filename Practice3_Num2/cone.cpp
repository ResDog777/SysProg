#include <iostream>
#include <cmath>
#include "cone.h"

using namespace std;

Cone::Cone()
{
	x = y = z = 0;
	h = r = 1;
}

Cone::Cone(double radius, double height)
{
	set(radius, height);
}

Cone::Cone(double radius, double height, double coord_x,
	double coord_y, double coord_z)
{
	set(radius, height, coord_x, coord_y, coord_z);
}

void Cone::set(double radius, double height)
{
	x = y = z = 0;
	h = height;
	r = radius;
}

void Cone::set(double radius, double height, double coord_x, double coord_y, double coord_z)
{
	x = coord_x;
	y = coord_y;
	z = coord_z;

	h = height;
	r = radius;
}


double Cone::get_area()
{
	return 3.14 * r * (r + sqrt(pow(r, 2) + pow(h, 2)));
}

double Cone::get_volume()
{
	return (3.14 * pow(r, 2) * h) / 3;
}


void Cone::show()
{
	setlocale(LC_ALL, "Russian");
	cout << "Конус с коориднатами x: " << x << " y: " << y << " z: " << z << endl;
	cout << "Высота конуса h: " << h << endl;
	cout << "Радиус основания r: " << r << endl;
}

double Cone::get_height()
{
	return h;
}

double Cone::get_radius()
{
	return r;
}

double Cone::get_x()
{
	return x;
}

double Cone::get_y()
{
	return y;
}

double Cone::get_z()
{
	return z;
}