#include <iostream>
using namespace std;

struct stEmployee
{
	string Name;
	float Salary;
};
int main()
{
	stEmployee Employee, * ptr;

	Employee.Name = "Othman Murad Haj-Mohammed";
	Employee.Salary = 15000;

	cout << Employee.Name << endl;
	cout << Employee.Salary << endl;

	cout << "\n___________________________Using Pointers____________________________\n";

	ptr = &Employee;

	cout << ptr->Name << endl;
	cout << ptr->Salary << endl;

	cout << &Employee.Name  << endl;
	cout <<&Employee.Salary << endl;
}
