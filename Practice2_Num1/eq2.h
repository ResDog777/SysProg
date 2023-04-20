#pragma once
#include <iostream>
#include <cmath>

class eq2
{
private:
	double a, b, c, D;

public:
	eq2(double a1, double b1, double c1);
	void set(double a1, double b1, double c1);
	double find_X();
	double find_Y(double x1);
	eq2 operator+(eq2 exmpl)
	{
		eq2 exmplsum(a, b, c);
		exmplsum.a = this->a + exmpl.a;
		exmplsum.b = this->b + exmpl.b;
		exmplsum.c = this->c + exmpl.c;
		return exmplsum;
	}
	void Out();
};