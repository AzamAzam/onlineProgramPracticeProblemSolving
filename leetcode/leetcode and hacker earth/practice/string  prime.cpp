//#include <iostream>
//#include <string >
//#include<map>
//using namespace std;
//
//bool  isprime ( long long int n ) {
//	if ( n == 1 )
//		return false;
//	for ( long int i = 2; i*i <= n; i++ ) {
//		if ( n%i == 0 )
//			return false ;
//	}
//
//	return true;;
//}
//bool isprime ( string s ) {
//	multimap <char , int > map;
//	multimap<char , int >::iterator it;
//	typedef pair < char , int> p;
//
//	int size = s.length ( );
//	while ( size-- ) {
//		it = map.find ( s [ size ] );
//		if ( it == map.end ( ) ) {
//			map.insert ( p ( s [ size ] , 1 ) );
//		}
//		else
//			it->second++;
//	}
//	int mapsize = map.size ( );
//	if ( !isprime ( mapsize ) ) {
//		
//		return false;
//	}
//	for ( it = map.begin ( ); it != map.end ( ); it++ ) {
//		if ( !isprime ( it->second ) ) {
//		
//			return false;
//		}
//	}
//	return true;
//}
//
//int main ( )  {
//	int T;
//	cin >> T;
//	while ( T-- ) {
//		string s;
//		cin >> s;
//		if (isprime ( s ))
//		cout << "YES";
//		else cout << "NO" << endl;
//	}
//}