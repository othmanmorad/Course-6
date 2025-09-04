// فيديو31الكورس الثالث.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	bool A = 1, B = 0;
	cout << (A && B) << endl;
	cout << (A || B) << endl;
	cout << !A  << endl;
	cout << !B << endl;
	cout << !(A && B) << endl;
	cout << !(A || B) << endl;


	bool result;
	result = !(5 > 6 || 7 == 7) && !(1 || 0);

	cout << "Result = " << result << endl;
	





}


