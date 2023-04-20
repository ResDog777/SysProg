#pragma once
#include <cmath>
#include <iostream>

class rational
{
public:
	int a, b;
	rational();
	rational(int a1, int b1);
	void set(int a1, int b1);
	void show(int i);
	int nod(int a, int b);
};