//#include <iostream>
////#include < 
//using namespace std;
//bool  isprime ( long long int n ) {
//
//	for ( long int i = 2; i*i <= n; i++ ) {
//		if ( n%i == 0 )
//			return 0;
//	}
//	return 1;
//}
//bool isprimeparts ( int n ) {
//	int j;
//	for ( int i = 2; i + 1 <= n; i++ ) {
//		if ( isprime ( i ) ) {
//			j = n - i;
//			if ( isprime ( j ) ) {
//				return 1;
//			}
//		}
//	}
//	return 0;
//}
//int main ( )
//
//{
//	int T;
//	cin >> T;
//	while ( T-- ) {
//		int n;
//		cin >> n;
//		if ( isprimeparts ( n ) )
//			cout << "Deepa"<<endl;
//		else cout << "Arjit" << endl;
//	}
//}