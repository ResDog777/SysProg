#include <iostream>
#include <cmath>
#include "truncatedcone.h"

using namespace std;

Truncated—one::Truncated—one()
{
	h2 = 1;
	r2 = 1;
}

Truncated—one::Truncated—one(double radius, double height, double radius2, double height2)
{
	set(radius, height, radius2, height2);
}

Truncated—one::Truncated—one(double radius,
	double height,
	double radius2,
	double height2,
	double coord_x,
	double coord_y,
	double coord_z)
{
	set(radius, height, radius2, height2, coord_x, coord_y, coord_z);
}

Truncated—one::Truncated—one(Cone cone)
{
	double radius2 = 1;
	double height2 = 1;
	set(cone.get_radius(), cone.get_height(), radius2, height2, cone.get_x(), cone.get_y(), cone.get_z());
}

Truncated—one::Truncated—one(Cone cone, double radius2, double height2)
{
	set(cone.get_radius(), cone.get_height(), radius2, height2, cone.get_x(), cone.get_y(), cone.get_z()
	);
}

void Truncated—one::set(double radius, double height, double radius2, double height2)
{
	Cone::set(radius, height);
	h2 = height2;
	r2 = radius2;
}

void Truncated—one::set(double radius, double height, double radius2, double height2, double coord_x, double coord_y, double coord_z)
{
	Cone::set(radius, height, coord_x, coord_y, coord_z);
	h2 = height2;
	r2 = radius2;
}

void Truncated—one::show()
{
	setlocale(LC_ALL, "Russian");
	cout << " ÓÌÛÒ Ò ÍÓÓË‰Ì‡Ú‡ÏË x: " << x << " y: " << y << " z: " << z << endl;
	cout << "¬˚ÒÓÚ‡ ‚ÒÂ„Ó ÍÓÌÛÒ‡ h: " << h << endl;
	cout << "¬˚ÒÓÚ‡ ÛÒÂ˜ÂÌÌÓ„Ó ÍÓÌÛÒ‡ h: " << h2 << endl;
	cout << "–‡‰ËÛÒ ÌËÊÌÂ„Ó ÓÒÌÓ‚‡ÌËˇ r: " << r << endl;
	cout << "–‡‰ËÛÒ ‚ÂıÌÂ„Ó ÓÒÌÓ‚‡ÌËˇ r2: " << r2 << endl;
}

double Truncated—one::get_area()
{
	double full_area = Cone::get_area();
	double l = h - h2;
	return full_area - (3.14 * r2 * (r2 + sqrt(pow(r2, 2) + pow(l, 2))));
}

double Truncated—one::get_volume()
{
	double full_volume = Cone::get_volume();
	double l = h - h2;
	return full_volume - ((3.14 * pow(r2, 2) * l) / 3);

}

std::ostream& operator << (std::ostream& os, Truncated—one& cone)
{
	setlocale(LC_ALL, "Russian");
	return os << "”ÒÂ˜ÂÌÌ˚È ÍÓÌÛÒ\nx:" << cone.get_x() << "\ny: " << cone.get_y() << "\nz: " << cone.get_z() << "\nr1: " << cone.get_radius() << "\nr2: " << cone.r2 << "\nh: " << cone.h2 << "\narea: " << cone.get_area() << "\nvolume: " << cone.get_volume() << std::endl;
}

std::istream& operator >> (std::istream& in, Truncated—one& cone)
{
	double r, h, r2, h2, x, y, z;

	in >> r >> h >> r2 >> h2 >> x >> y >> z;
	cone.set(r, h, r2, h2, x, y, z);
	return in;
}

bool operator > (Truncated—one& cone1, Truncated—one& cone2)
{
	return cone1.get_volume() > cone2.get_volume();
}

bool operator < (Truncated—one& cone1, Truncated—one& cone2)
{
	return cone1.get_volume() < cone2.get_volume();
}

bool operator == (Truncated—one& cone1, Truncated—one& cone2)
{
	return cone1.get_volume() == cone2.get_volume();
}

bool operator <= (Truncated—one& cone1, Truncated—one& cone2)
{
	return cone1.get_volume() <= cone2.get_volume();
}

bool operator >= (Truncated—one& cone1, Truncated—one& cone2)
{
	return cone1.get_volume() >= cone2.get_volume();
}