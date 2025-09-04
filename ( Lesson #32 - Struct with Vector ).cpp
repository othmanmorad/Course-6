#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);

	//vNumbers.clear();

	if (vNumbers.size() > 0)
	{
		cout << "First element " << vNumbers.front()<<endl;
	}

	if (!vNumbers.empty())
	{
	  cout << "\nLast element " << vNumbers.back()<<endl;
	}

	cout << "Size " << vNumbers.size() << endl;

	cout << "Capacity " << vNumbers.capacity() << endl;

	cout << "Empyt " << vNumbers.empty() << endl;
}
