//#include<iostream>
//using namespace std;
//
//bool ispalindrome ( unsigned long long int n ) {
//	long long int r = 0;
//	long long int s = n;
//	while ( n > 0 ) {
//		r = r * 10 + n % 10;
//		n /= 10;
//	}
//	if ( r == s )
//		return true;
//	return false;
//}
//int largestPalindrome ( int n ) {
//	long  int upperboundary = pow ( 10 , n ) - 1;
//	long  int lowerboundary = pow ( 10 , n - 1 );
//	unsigned long long int max = 0;
//	unsigned long long int product;
//	bool f = false;
//	for ( ; upperboundary >= lowerboundary; upperboundary-- ) {
//		for ( long int i = upperboundary; i >= lowerboundary; i-- ) {
//			product = i*upperboundary;
//			if ( ispalindrome ( product ) && product > max ) {
//				max = product;
//				f = true;
//				break;
//
//			}
//			if ( f )
//				break;
//		}
//	}
//	return max % 1337;
//}
//
//int main ( ) {
//	cout << largestPalindrome ( 1 ) << endl;
//	cout << largestPalindrome ( 5 ) << endl;
//	cout << largestPalindrome ( 8 ) << endl;
//}