#pragma once
#include <iostream>
#include "cone.h"

using namespace std;

class Truncated—one : public Cone
{
private:
	double h2; 
	double r2; 

public:
	Truncated—one();

	Truncated—one(double radius, double height, double radius2, double height2);

	Truncated—one(double radius, double height, double radius2, double height2, double coord_x, double coord_y, double coord_z);

	Truncated—one(Cone cone);

	Truncated—one(Cone cone, double radius2, double height2);

	void set(double radius, double height, double radius2, double height2);

	void set(double radius, double height, double radius2, double height2, double coord_x, double coord_y, double coord_z);

	void show();

	double get_area();

	double get_volume();

	friend ostream& operator << (ostream& os, Truncated—one& cone);
	friend istream& operator >> (istream& in, Truncated—one& cone);

};


ostream& operator << (ostream& os, Truncated—one& cone);
istream& operator >> (istream& in, Truncated—one& cone);

bool operator > (Truncated—one& cone1, Truncated—one& cone2);
bool operator < (Truncated—one& cone1, Truncated—one& cone2);
bool operator == (Truncated—one& cone1, Truncated—one& cone2);
bool operator <= (Truncated—one& cone1, Truncated—one& cone2);
bool operator >= (Truncated—one& cone1, Truncated—one& cone2);
