#include <iostream>
using namespace std;


//Function Declaration
void Add(int , int );

int ReadPoisitvenumber(int from, int to);

int main()
{
    //Function Call
    Add(4, 6);

    ReadPoisitvenumber(18, 45);
}

//Function Difinition
void Add(int a, int b)
{
    cout << a + b<<endl;
}


//example from me 
int ReadPoisitvenumber(int from, int to)
{
    int Number;
    do
    {
        cout << "Enter number between " << from << " and " << to << endl;
        cin >> Number;
    } while (Number<from || Number>to);

    return Number;
}