#include<iostream>
using namespace std;
int reverse(int n){
	int  last=0;
	int r = 0;
	for (int  i = n; i!=0 ; i/=10)
	{
		r = r * 10 + i % 10;
		if (r < last)
			return 0;
		last = r;
	}
	return r;
}
int main(){
	int  a;
	cout << "Enter a  number : ";
	cin >> a;
	bool sign = (a < 0) ?  true : false;
	a = abs(a);
	int  rev = reverse(a);
	(sign) ? cout << "Reverse of " << a << " =  " << rev*-1 << endl : cout << "Reverse of " << a << " =  " << rev << endl;
	
}
