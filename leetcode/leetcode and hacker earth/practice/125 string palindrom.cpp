//#include <iostream>
//#include<string>
//using namespace std;
//bool isPalindrome ( string s ) {
//	int end = s.size ( ) - 1;
//	int si = end;
//	for ( int i = 0; i <= end; ) {
//		s [ i ] = toupper ( s [ i ] ); s [ end ] = toupper ( s [ end ] );
//		if ( ( s [ i ]<'0' || s [ i ]>'Z' ) || ( s [ i ] > '9'&& s[ i ]<'A' ) ) {
//			i++;
//			continue;
//		}
//		if ( ( s [ end ]<'0' || s [ end ]>'Z' ) || ( s [ end ]>'9'&&s [ end ] < 'A' ) ) {
//			end--;
//			continue;
//		}
//		if ( s [ i ] != s [ end ] )
//			return false;
//		i++; end--;
//	}
//	return true;
//}
//
//int main ( ) {
//	cout << isPalindrome ( "AZAM" ) << endl;
//	cout << isPalindrome ( "madam" ) << endl;
//	cout << isPalindrome ( "A man , a plan , a canal : Panama" ) << endl;
//
//}