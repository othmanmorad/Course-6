#include <iostream>
using namespace std;

int main()
{
	int *ptrx;
	float* ptry;

	ptrx =new int;
	ptry = new float;

	*ptrx = 45;
	*ptry = 58.35f;

	cout<<  *ptrx <<endl;
	cout<<  *ptry << endl;

	delete ptrx;
	delete ptry;
	cout << endl;
}		   

