#include <iostream>
using  namespace std;
#define MAXSIZE 200

int multiplication(int  a[], int n, int);
void  fact(int  f){

	int  a[MAXSIZE] = { 0 };

	a[0] = 1;
	int s = 1;
	for (int i = 2; i <= f; i++){
		s = multiplication(a, s, i);
	}
	int  sum = 0;
	for (int  i = s-1; i >=0; i--)
	{
		cout << a[i];
		sum += a[i];
	}
	cout <<endl<<" Sum of  digits of factorial "<<f<<" is "<<sum<< endl;
}
int multiplication(int a[], int  s, int m){
	int carry = 0;
	int result;
	
	int  index = 0;
	for (int i = 0; i < s; i++){
		result = carry + a[i] * m;
		a[index++] = result % 10;
		carry = result / 10;
	}
	while (carry != 0){
		a[index++] = carry % 10;
		carry = carry / 10;
	}

	return index;
}
int  main(){
	int  a;
	cout  <<"Enter limit ";
	cin>>a;
	for (int i = 1; i < a; i++){
		fact(i);
	}
//	system("pause");
	return 0;
}
