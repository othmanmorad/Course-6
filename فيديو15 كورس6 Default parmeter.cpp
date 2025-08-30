#include <iostream>
using namespace std;
int Sum(int a, int b, int c = 0, int d = 0)
{

    return (a + b + c + d);

}

//example from me 
int Multiplcation(int a, int b, int c = 1, int d = 1)
{
    return (a * b * c * d);
}
int main()
{               //10+20+0+0
    cout << Sum(10, 20)<<endl;

                //10+20+30+0
    cout << Sum(10, 20, 30)<<endl;

                //10+20+30+40
    cout << Sum(10, 20, 30, 40)<<endl;
    
    cout << "\n___________________________\n" << endl;

                        //10*20*1*1
    cout << Multiplcation(10, 20) << endl;

                         //10*20*30*1
    cout << Multiplcation(10, 20, 30) << endl;

                         //10*20*30*40
    cout << Multiplcation(10, 20, 30, 40) << endl;


}

