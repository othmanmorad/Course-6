#include <iostream>
#include "MyLibrary.h";
#include "MyInputLibrary.h";

using namespace std;

int main()
{
    MyLibrary::Teast();

    cout <<"\n"<< MyLibrary::SumTowNumber(10, 20) << endl;

    cout << MyInputLibrary::ReadNumber() << endl;
}

