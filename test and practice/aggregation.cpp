//#include <iostream>
//#include <string >
//#include <vector>
//using namespace std;
//class date
//{
//	int d, m, y;
//public:
//	date(){}
//
//	date(int da, int mo, int ye)
//	{
//		d = da; m = mo; y = ye;
//	}
//
//	void setdate(int da, int mo, int ye){
//		d = da; m = mo; y = ye;
//	}
//	void show(){
//		cout << d << " " << m << " " << y << endl;
//	}
//
//};
//class country
//{
//	string name;
//public:
//	country();
//	country(string n){
//		name = n;
//	}
//	void set_name(string n){
//		name = n;
//	}
//	void show(){
//		cout << name << endl;
//	}
//};
//
//class person
//{
//	string name;
//	date d;
//	country *c;
//
//public :
//	void setval(string n, int da,int m,int y, country *cr){
//		name = n;
//		d.setdate(da, m, y);
//		c = cr;
//	}
//	void show(){
//		cout << "Name : "<<name << endl;
//		cout << "DAte of birth  : ";
//		d.show();
//		cout << "Country  : ";
//		c->show();
//
//	}
//};
//int main()
//{
//
////	size_type g;
//	country ct("pakistan");
//	person p;
//	p.setval("Azam", 2, 12, 1993, &ct);
//	p.show();
//	ct.set_name("Lahore ");
//	p.show();
//    ct.set_name("Basirpur");
//    p.show();
//}