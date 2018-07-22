#include <iostream>
using namespace std;

enum MyEnum
{
Ali, Ahmad 
};

class Base
{
public:
	int i;
	virtual void show()=0;
	Base(int k){ i = k; }
};
class Derived : public Base
{
public:
	double d;
	void show(){ cout << i<<" "<<d << endl; }
	Derived(int k, double g) : Base(k){ d = g; }
};

struct MyStruct
{
	int a, b, c;
	MyStruct(int a, int b){
		this->a = a;
		this->b = b;
	}
};
int main()
{
	MyStruct s = { 1, 2 };
	cout << s.a << s.c << endl;
	MyEnum d;
	int a = Ali,b=Ahmad;
	//d = tus;
	
		cout << a<<b;
	
		cout << " NO ";
	



	int a, *q;
	Base w(5);

	Base *pb = new  Base(4);
	pb = &w;
	cout << pb->i;
	delete pb;
	Derived *pd = new Derived(6, 10.5);
 /*Base 	 *pb = new Derived(6, 10);
	 pb->show();
	 */
}
