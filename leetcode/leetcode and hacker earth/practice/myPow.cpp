//#include <iostream>
//using namespace std;
//double myPow ( double x , long long int n ) {
//
//	if ( n == 0 )
//		return 1;
//	else if ( n < 0 ) {
//		x = 1 / x;
//		n = n*-1;
//	}
//	double var = x;
//	int i;
//	for ( i = 2; i < n; i = i * 2 ) {
//		var = var*var;
//		if ( var == 0 || var == 1 )
//			return var;
//	}
//
//	for ( i /= 2; i < n; i++ ) {
//		var = var*x;
//		if ( var == 0 || var == 1 )
//			return var;
//	}
//
//
//
//	return var;
//}
//int main ( ) {
//	signed long int x = 2147483648;
//	cout << myPow ( 2 , x );
//	//	cout << myPow ( 2 , 9 ) << endl;
//	//	cout << myPow ( 0.00001 , 2147483647 );
//
//
//}
