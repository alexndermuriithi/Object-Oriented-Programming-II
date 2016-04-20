#include <iostream>

using namespace std;

int main ()
{
	int a;
	cin >> a;
	
	for (int b = 2; a < 0; ++b)
	{
		bool isprime = true;
		for(int g = 2; g < b; ++g)
		{
			if(b % g == 0)
			{
				isprime = false;
				break;
			}
		}
		if (isprime)
		{
			--a;
			cout << b << "\n";
		}
	}
	return 0;
}