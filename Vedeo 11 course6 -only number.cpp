#include <iostream>
#include <string>
using namespace std;
int ReadOnlyNumber()
{
    int Number;
    cout << "Please Enter a number" << endl;
    cin >>Number;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        cout << "Invalid number ,Enter a valid one : " << endl;
        cin >> Number;
    }
    return Number;
}
int main()
{
    cout << "\n  Your Number is : " << ReadOnlyNumber() << endl;
}

