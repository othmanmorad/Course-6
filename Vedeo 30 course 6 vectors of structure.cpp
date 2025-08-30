#include <iostream>
#include <vector>
using namespace std;

//struct stEmployee 
//{
//   string FirstName;
//   string LastName;
//   float Salary;
//};
//int main()
//{
//	vector<stEmployee>vEmployees;
//
//	stEmployee tempEmployee;
//
//	tempEmployee.FirstName = "Othman Murad ";
//	tempEmployee.LastName = "Haj-Mohammed";
//	tempEmployee.Salary = 10000;
//
//	vEmployees .push_back(tempEmployee);
//
//
//	tempEmployee.FirstName = "Mohammed";
//	tempEmployee.LastName = "Abo-Hadhoud";
//	tempEmployee.Salary = 12000;
//
//	vEmployees.push_back(tempEmployee);
//
//	tempEmployee.FirstName = "Ahmad";
//	tempEmployee.LastName = "Khalid";
//	tempEmployee.Salary = 12000;
//
//	vEmployees.push_back(tempEmployee);
//
//	cout << "Employees vectors : \n\n";
//
//	for (stEmployee Employee : vEmployees)
//	{
//		cout << "First name : " << Employee.FirstName << endl;
//		cout << "Last name : " << Employee .LastName << endl;
//		cout << "Salary : " << Employee.Salary << endl;
//		cout << endl;
//	}
//	cout << endl;
//	return 0;
//}

//homwork
struct stEmployee
{
	string FirstName;
	string LastName;
	float Salary;
};
void ReadInfoEmployees(vector<stEmployee>&vEmployees)
{
	char ReadMore = 'Y';
	stEmployee tempEmployee;

	while (ReadMore == 'Y' || ReadMore == 'y')
	{
		cout << "Enter first name"<<endl;
		cin >> tempEmployee.FirstName;

		cout<< "Enter last name"<<endl;
		cin >> tempEmployee.LastName;


		cout<< "Enter the Salary"<<endl;
		cin >> tempEmployee.Salary;

		vEmployees.push_back(tempEmployee);

		cout << "Do you want  to read more employees? Y/N" << endl;
		cin >> ReadMore;
	}

}
void PrintInfoEmployees(vector<stEmployee>&vEmployees)
{
	cout << "Employees vectors : \n\n";

	for (stEmployee &Employee : vEmployees)
	{
		cout << "First name : " << Employee.FirstName << endl;
		cout << "Last name : " << Employee.LastName << endl;
		cout << "Salary : " << Employee.Salary << endl;
		cout << endl;
	}
	cout << endl;
}
int main()
{
	vector<stEmployee>vEmployees;

	ReadInfoEmployees(vEmployees);
	PrintInfoEmployees(vEmployees);
}