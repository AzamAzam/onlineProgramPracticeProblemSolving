#include<iostream>
#include<math.h>
using namespace std;

bool exist4( long  n)
{
	while (n > 0)
	{
		if (n % 10 == 4)
			return true;
		n /= 10;
	}
	return false;
}

 long  firstPart( long  number)
{
	 long  n = number / 2;
	 long  n2 = number - n;
	 long i = sqrt(number);
	while(n2 > 0 && (exist4(n) || exist4(n2)))
	{
		n=n/i;
		i--;
		n2 = number - n;
	}
	return n;
}

int main5()
{
	int n;
	cin >> n;

	 long  number;

	for ( long  i = 1; i <= n; i++)
	{
		cin >> number;
		cout << "Case #" << i << ": ";

		cout << firstPart(number) << " " << number - firstPart(number);
		cout << endl;
	}

	return 0;
}
