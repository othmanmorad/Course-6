#include <iostream>
using namespace std;

int main()
{
	//int Mark;
	//string Result;
	//
	//cout << "Enter The mark :" << endl;
	//cin >> Mark;
	//Result = (Mark >= 50) ? "Pass" : "Faile";
	//cout<< Result<<endl;



	//Homework1
	//int Number;
	//string Result;
	//cout << "Enter number :" << endl;
	//cin >> Number;
	//Result = (Number > 0) ? "Positive" : "Negative";
	//cout << "Number is " << Result;
	

	//Homework2
	int Number;
	string Result;
	cout << "Enter number :" << endl;
	cin >> Number;
	Result = (Number == 0) ? "Zero" : ((Number > 0) ? "Positive" : "Negative");
	cout << "Number is " << Result;

	return 0;
}

