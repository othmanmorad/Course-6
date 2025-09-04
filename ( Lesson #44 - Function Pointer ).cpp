#include <iostream>
using namespace std;

int main()
{
	int Number;
	cout << "Enter total number of students" << endl;
	cin >> Number;

	float* ptr;
	ptr = new float[Number];

	cout << "Enter grades's of students" << endl;
	for (int x = 0;x < Number;x++) 
	{
		cout << "Student [" << x + 1 << "]" << endl;
		cin >> *(ptr + x);
	}

	cout << "\n Displaying grade of students" << endl;
	for (int i = 0;i < Number;i++)
	{
		cout << "Student [" << i + 1 << "]  " <<*(ptr+i)<< endl;
		
	}
	delete []ptr;
}

