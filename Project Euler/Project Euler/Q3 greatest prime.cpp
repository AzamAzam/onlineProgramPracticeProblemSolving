#include <iostream > 
#include <cmath >
using namespace std;
bool prime(int long long );
int main()
{
	int long long  i,n;
	bool 	flag = false ;
	n = 600851475143;
	cout << n<<endl;
	for (i = 2; i < sqrt (n);i++)
	{
		if (n%i == 0)
		{
			//cout <<n/i<<", ";
			flag = prime(n/i);

			if (flag)
			{
			
				cout << "Greatest Prime factor is = " << i << endl;
				break;
			}
		}
	}
	if (!(flag ))
	for (i = sqrt(n); i > 1; i--)
	{
		if (n%i == 0)
		{
			//cout << i << ", ";
			flag = prime( i);

			if (flag)
			{

				cout << "Greatest Prime factor is = " << i << endl;
				break;
			}
		}
	}
	
}
bool prime(int long long numb)
{
	int j;
	int    n = sqrt(numb);
	for (j = 2; j <= n  ; j++)
	{
		if (numb%j == 0)
			break;
	}
	if (j == n+1)
		return true;
	else
		return false  ;
}
