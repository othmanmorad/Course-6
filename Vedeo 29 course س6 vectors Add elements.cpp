#include <iostream>
#include <vector>

using namespace std;
//int main()
//{
//
//    vector <int> vNumber ;
//
//    vNumber.push_back(10);
//    vNumber.push_back(20);
//    vNumber.push_back(30);
//    vNumber.push_back(40);
//    vNumber.push_back(50);
//
//    for (int& Number : vNumber)
//    {
//        cout << Number << " ";
//    }
//    cout << endl;
//}

void ReadNumbers(vector <int> &vNumber)
{

	int Number;
	char ReadMore ='Y';
	while (ReadMore == 'Y' || ReadMore == 'y')
	{
		cout << "Enter the number" << endl;
		cin >> Number;

		vNumber.push_back(Number);

		cout << "\nDo you want to read more numbers? Y/N ?" << endl;
		cin >> ReadMore;
	}
}
void PrintVectorNumbers(vector <int>& vNumber)
{
	cout << "Numbers vectors :\n\n";
	for (int Number : vNumber)
	{
		cout << Number << endl;
	}
	cout << endl;
}
int main()
{
	vector <int> vNumber;
	ReadNumbers(vNumber);
	PrintVectorNumbers(vNumber);
}