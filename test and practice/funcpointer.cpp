#include<iostream>
using namespace std ;
bool  func1(){
	cout <<"a";
	return  true;
}
bool func2(){
	cout <<"B";
	return false ;
}
void  func(bool (*fun)())
{
	fun();
}
int main ()
{
	
func(&func2);

 return 0;
}

