#include<iostream>
using  namespace   std;
class A{
public:
	int  f(){ cout << 3; }
	int f(int x){ cout << x; return 0; }

};
class B :public A{
public:
	int  f(){ cout << 5; return 0; }
	int f(int x){ cout << x + 2; return 0; }
};
int  main()
{
	B ob;
	ob.f();
	cout << INT_MAX <<endl ;
}
