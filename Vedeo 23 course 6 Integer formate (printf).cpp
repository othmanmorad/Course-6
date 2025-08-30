#include <iostream>
using namespace std;

int ReadPage(string message)
{
    int number;
    cout << message << endl;
    cin >> number;
    return number;
}

int main()
{
    int Page = ReadPage("Enttr page number "), TotalPage = 10;
    printf("The page number =%d \n", Page);
    printf("You are in page %d of %d \n", Page, TotalPage);

    printf("The page number =%0*d\n", 2, Page);
    printf("The page number =%0*d\n", 3, Page);
    printf("The page number =%0*d\n", 4, Page);
    printf("The page number =%0*d\n", 5, Page);

    int Number1 = ReadPage("enter number1"), Number2 = ReadPage("enter number2");
    printf("The result of %d + %d = %d", Number1, Number2, Number1 + Number2);
}

