#include <iostream>

using namespace std;

long accumulator = 1;

int main ()
{
	int x ;
	cout << "Enter a number : ";
	cin >> x;
	
	if(x < 0)
	{
		cout << "No negative numbers allowed !\n";
		return 1;
	}
	if(x > 20)
		cout << "Program will not produce correct result !\n";
	
	for (x; x > 0; counter *= x--)
	{
		cout << "The factorial of " << x << " is " << counter;
	}
	return 0;
}