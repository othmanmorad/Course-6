﻿#include <iostream>
#include <cstdlib>
using namespace std;

//int main()
//{
//	int x[3][4] =
//	{
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12}
//	};
//	for (int i = 0;i < 3;i++)
//	{
//		for (int j = 0;j < 4;j++)
//		{
//			cout << x[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//homework
int main()
{
	int x[10][10];
	
	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < 10;j++)
		{
			x[i][j] =(i+1)*(j+1)  ;
		}
		cout << endl;
	}

	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < 10;j++)
		{
			printf(" %0*d ", 2, x[i][j]);
		}
		cout << endl;
	}

	return 0;
}



