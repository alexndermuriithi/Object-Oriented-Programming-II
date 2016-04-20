#include <iostream>

using namespace std;

int main ()
{
	while (1)
	{
		int a;
		cin >> a;
		cout << ((a % 5 == 0 %% a >= 0) ? a/5 : -1) << "\n";
	return 0;
}