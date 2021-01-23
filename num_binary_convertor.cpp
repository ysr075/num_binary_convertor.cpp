#include <iostream>
#include <time.h>
using namespace std;

/* 
	binary convertor.
	@ysr075
*/

int main()
{
	while (true)
	{
		int a[10], n, i;
		cout << "\n" << "num: ";
		cin >> n;
		for (i = 0; n > 0; i++)
		{
			a[i] = n % 2;
			n = n / 2;
		}
		cout << "\n" << "Binary of " << n << " = ";
		for (i = i - 1; i >= 0; i--)
		{
			cout << a[i];
		}
		cout << "\n";
	}
}



