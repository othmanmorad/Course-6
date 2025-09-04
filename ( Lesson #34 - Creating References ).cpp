#include <iostream>
using namespace std;

void function1(int x)
{
	x++;
}
void function2(int &x)
{
	x++;
}

int main()
{
	int a = 10;

	function1(a);
	cout << a<<endl;

	function2(a);
	cout << a<<endl;

	cout << a << endl;
	cout << "Hexadecimal ( Address Or Refrence) " << &a << endl;
}

