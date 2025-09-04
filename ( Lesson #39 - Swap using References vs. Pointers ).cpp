#include <iostream>
using namespace std;
void Swap_Ref(int& n1, int& n2)
{
    int Temp;
    Temp= n1;
    n1 = n2;
    n2 = Temp;
}
void Swap_Poin(int *n1, int* n2)
{
    int Temp;
    Temp = *n1;
    *n1 = *n2;
    *n2 = Temp;
}


int main()
{
    int a=10, b=20;
    cout << "Numbers befor swap :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    Swap_Ref(a, b);

    cout << "Numbers after swap :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "_________________________________" << endl;
    int s = 10, r = 20;
    cout << "Numbers befor swap :" << endl;
    cout << "s = " << s << endl;
    cout << "r = " << r << endl;

    Swap_Poin(&s, &r);

    cout << "Numbers after swap :" << endl;
    cout << "s = " << s << endl;
    cout << "r = " << r << endl;

}

