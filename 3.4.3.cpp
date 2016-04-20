#include <iostream>

using namespace std;

int main ()
{
	while (1)
	{
		int a;
		cin >> a;
		if (a % 5 > 0)
		{
			cout << "-1" << "\n";
			continue;
		}
		if (a == -1)
			break;
		cout << a/5 << "\n";
	}
	cout << "Goodbye!\n";
	return 0;
}