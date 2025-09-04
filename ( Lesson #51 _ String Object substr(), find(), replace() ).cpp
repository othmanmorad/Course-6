#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char x = toupper('a');
	char w = tolower('A');

	cout << toupper('a') << endl;
	cout << tolower('A') << endl;

	cout << "converting a to A : " << x << endl;
	cout << "converting A to a : " << w << endl;

	cout << "isupper ('A') " << isupper('A') << endl;
	cout << "islower('a') " << islower('a') << endl;
	cout << "isdigit('5') " << isdigit('5') << endl;
	cout << "ispunct(';') " << ispunct(';') << endl;

}

