#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class Atype> class array1
{
	Atype* a;
	int len;

public:
	array1(int size);
	~array1()
	{
		delete[]a;
	}
	Atype& operator[](int n);
	void Sort(void);
	void Sort(string str);
	void Out(void);
};

template <class Atype> array1 <Atype>::array1(int size)
{
	len = size;
	a = new Atype[size];
}

template <class Atype> Atype& array1 <Atype>::operator[](int n)
{
	setlocale(LC_ALL, "Russian");
	if (n < 0 || n > len - 1)
	{
		cout << "Выход за границу массива" << endl;
		exit(1);
	}
	return a[n];
}

template <class Atype> void array1 <Atype>::Sort(void)
{
	Atype b;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}
}

template <class Atype> void array1 <Atype>::Sort(string str)
{
	vector<Atype> s;

	for (int i = 0; i < 5; i++)
	{
		s.push_back(a[i]);
	}
	sort(s.begin(), s.end());
	for (int i = 0; i < 5; i++)
	{
		a[i] = s[i];
	}
}

template <class Atype> void array1 <Atype>::Out(void)
{
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}