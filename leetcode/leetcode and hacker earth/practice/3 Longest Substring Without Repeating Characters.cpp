//#include<iostream>
//#include<string>
//using namespace std;
//
//bool isrepeat ( string s ) {
//	for ( int i = 0; i < s.length ( ); i++ ) {
//		for ( int j = i + 1; j < s.length ( ); j++ ) {
//			if ( s [ i ] == s [ j ] )
//				return true;
//		}
//	}
//	return false;
//}
//int lengthOfLongestSubstring ( string s ) {
//	int size = s.length ( );
//	int max = 0;
//	int j;
//	for ( int i = 0; i < size; i++ ) {
//		    int  count =1;
//			for ( j = i; j<size; j++ , count++ ) {
//
//
//			string sub = s.substr ( i , count );
//			
//			
//			bool f = isrepeat ( sub );
//			if ( ( count ) > max && !f ) {
//				max = count;
//				
//			}
//			else if ( f ) break;
//		}
//	}
//	return max;
//}
//int main ( ) {
//	cout << lengthOfLongestSubstring ( "abcbc" ) << endl;
//	
//	cout << lengthOfLongestSubstring ( "pwff" ) << endl;
//	string s="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ abc";
//	cout << lengthOfLongestSubstring (s );
//}