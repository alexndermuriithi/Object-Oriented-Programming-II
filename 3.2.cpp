#include <iostream>

using namespace std;

int main ()
{
	int a, total;
	cout << "enter a";
	cin >> a;
	
	for (int b = 1; b < a; ++b)
	{
		int x;
		cin >> x;
		tota = total + x;
		if(x < minval)
			minval = x;
		if (x > maxval)
			maxval = x;
	}
	cout << "Average = " << total/a "\n";
	cout << "Max = " << maxval << "\n";
	cout << "Min = " << minval << "\n";
	cout << "Range = " << (maxval - minval) << "\n";
	return 0;
}