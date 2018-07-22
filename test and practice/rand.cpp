#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

int main()
{

	long int m_2 = 2145483479;
	long int m_1 = 2147483647;
	long int a_1 = 0;
	long int a_2 = 63308;
	long int a_3 = -183326;
	long int b_1 = 86098;
	long int b_2 = 0;
	long int b_3 = -539608;

	long int 	x_n, y_n;
	long int  z_n;


	long int n;
	n = time(0);

	int c = 100;
	for(int i = 0; i < c; i++)
	{
		
		x_n = (a_1 * (n-1) + a_2 * (n-2) + a_3 * (n-3) * x_n ) % m_1;
		y_n = (b_1 * (n-1) + b_2 * (n-2) + b_3 * (n-3) * y_n) % m_2;
		z_n = (x_n - y_n) % m_1;
		cout << 1 + z_n  % 1000 <<endl;
		n++;
	}
	
	return 0;
}
