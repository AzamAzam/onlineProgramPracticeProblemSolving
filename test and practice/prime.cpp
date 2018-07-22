#include <iostream>

using namespace std ;
bool  isprime (long long int n){

	for (long int i=2;i*i<=n;i++){
		if (n%i==0)
		return 0;
	}
	return 1;
}
int main ()
{
	int a,b;
	cin >>a>>b;
cout <<isprime(a)<<endl;
cout <<isprime(b)<<endl;

}

