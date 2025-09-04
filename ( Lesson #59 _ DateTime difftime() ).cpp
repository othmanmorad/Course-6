#pragma warning(disable:4996)
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	time_t t = time(0);
	char* dt = ctime(&t);
	cout << "Local data and time is : " << dt << "\n\n";

	tm* gmtm = gmtime(&t);

	dt = asctime(gmtm);
	cout << "Utc data and time is : " << dt << "\n\n";
	return 0;
}

