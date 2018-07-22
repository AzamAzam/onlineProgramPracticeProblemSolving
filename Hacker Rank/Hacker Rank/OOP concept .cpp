#include <iostream>
using namespace std;
class Test {
	int n;
	int * list;
public:
	 Test(int i){
		n = i;
		list = new int [n];

	}

	 Test(const Test & x){
		 n = x.n;
		 list = new int[n];
		 for (int i = 0; i < n; i++){
			 list[i] = x.list[i];
		 }
	 }

	 void input(){
		 cout << " Enter " << n << " Numbers : ";
		 for (int i = 0; i < n; i++){
			 cin >> list[i];
		 }
	 }
	 void show(){
		 for (int i = 0; i < n; i++){
			 cout << list[i]<<",  ";
		 }
		 cout << endl;
	 }

	 void operator=(const Test &x){
		 delete list;
		 n = x.n;
		 list = new int[n];
		 for (int i = 0; i < n; i++){
			 list[i] = x.list[i];
		 }
	 }
};


int main()
{
	Test A(5);
	A.input();
	A.show();
//	Test B =A;
	Test B(5);
	B = A;
	B.show();
	A.show();
	B.input();
	A.show();
	B.show();

}
