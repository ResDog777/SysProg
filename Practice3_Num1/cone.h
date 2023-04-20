#pragma once
class Cone
{
private:
	double x, y, z, h, r;

public:
	Cone();

	Cone(double radius, double height);

	Cone(double radius, double height, double coord_x, double coord_y, double coord_z);

	void set(double radius, double height);

	void set(double radius, double height, double coord_x, double coord_y, double coord_z);

	void show();

	double get_area();

	double get_volume();

};
