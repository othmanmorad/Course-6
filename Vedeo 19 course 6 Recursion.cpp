#include <iostream>
#include <string>
using namespace std;

//Explanation
//void PrintNumbers(int N, int M)
//{
//    if (N <= M)
//    {
//        cout << N << endl;
//        PrintNumbers(N+1, M);
//    }
//}
//int main()
//{
//    PrintNumbers(1, 4);
//}

//Homewrok1
//void PrintNumbersFromMtoN(int M, int N)
//{
//    if (M >= N)
//    {
//        cout << M << endl;
//        PrintNumbersFromMtoN(M - 1, N);
//    }
//}
//int main()
//{
//    PrintNumbersFromMtoN(10, 1);
//    return 0;
//}

//Homewrok2
int MyPower(int Base, int Power)
{
	if (Power == 0)
		return 1;

	else
		return(Base * MyPower(Base, Power - 1));
}

int main()
{
	cout << MyPower(2, 5);
}
























