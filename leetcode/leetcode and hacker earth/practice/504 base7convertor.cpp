//#include<iostream>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//	string convertToBase7 ( int num ) {
//		if ( num == 0 )
//			return "0";
//
//		int r;
//		string s;
//		int m = 1 , n = 0;
//		while ( num != 0 ) {
//			r = num % 7;
//			num = num / 7;
//			n = n + r*m;
//			m = m * 10;
//		}
//		s = to_string ( n );
//		return s;
//	}
//};
//
//int main ( ) {
//
//	Solution d;
//	cout << d.convertToBase7 ( 100 ) << endl;
//
//}