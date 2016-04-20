#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int a = 0;	

	for (a ; a < x; a++)
		cout << "Hello, World!" << "\n";

	while (a < x)
	{
		cout << "Hello, World!" << "\n";
		a++;
	}

	do
	{
		cout << "Hello, World!" << "\n";
		a++;
	}
	while (a < x)

	return 0;
}