#include <iostream>
using namespace std;

int main()
{
    int arr[10] = { 10,20,30,40 };
    int* p;
    p= arr;

    cout << "Adress araay : \n" << endl;
    cout<<  p     << endl;
    cout << p + 1 << endl;
    cout << p + 2 << endl;
    cout << p + 3 << endl;


    cout << "\nValue araay : \n" << endl;
    cout << *(p) <<  endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;
    cout << *(p + 3) << endl;


    cout << "\nAdress araay by for loop: \n" << endl;
    for (int i = 0;i < 4;i++)
    {
        cout << (p + i) << endl;

    }
    cout << "\nValue araay by for loop: \n" << endl;
    for (int i = 0;i < 4;i++)
    {
        cout << *(p+i) << endl;
      
    }
}

