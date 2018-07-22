#include <iostream>
using namespace std;
bool isprime( int x){
	if (x == 1)
		return false;
	for (int i = 2; i*i <= x; i++)
	if (x%i == 0)
		return false;
	return true;

}
int main(){
	int t;
	cin>>t;
	 for (int i=0;i<t;i++){
int  a;	 
	cout << "Enter  a number  to check it either  it is  prime  or  not ";
	cin >> a;
	if (isprime(a))
		cout << a << " is  a prime Number"<<endl;
	else 
		cout << a << " is  a Non prime Number"<<endl ;
}
}
