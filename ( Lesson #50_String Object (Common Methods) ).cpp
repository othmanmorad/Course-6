#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1 = "My name is Othman Morad Haj-Mohemmed , I love programming. ";

	cout << s1.length() << endl;

	cout << s1.at(4) << endl;

	cout << s1.append(" @programmingadvices") << endl;

	cout << s1.insert(7, " salih") << endl;

	cout << s1.substr(17, 6) << endl;

	
		s1.push_back('x') ;
		cout << s1 << endl;

		
				s1.pop_back();
				cout << s1 << endl;
		
		
		

		cout << s1.find("Othman") << endl;

		cout << s1.find("Raed") << endl;
		if (s1.find("Raed") == s1.npos)
		{
			cout << "Raed not found" << endl;
		}

		s1.clear();
		cout << s1;
}

