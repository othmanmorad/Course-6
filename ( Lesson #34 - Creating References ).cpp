﻿#include <iostream>
using namespace std;

//fedeo 34
int main()
{
	int a = 10;
	int &x = a;
	cout << &a << endl;
	cout << &x << endl;

	x = 20;
	cout << a << endl;
	cout << x << endl;
}
