//#include <iostream>
//#include<string>
//#include<hash_map>
//using namespace std;
//bool isanagram ( string s , string s1 ) {
//	hash_multimap<char , int > original;
//	hash_multimap<char , int > map;
//	typedef pair<char , int> p;
//	hash_multimap<char , int>::iterator it;
//	
//	for ( int i = 0; i < s.size ( ); i++ ) {
//		it = original.find ( s [ i ] );
//		if ( it == original.end ( ) )
//			original.insert ( p ( s [ i ] , 1 ) );
//		else
//			it->second++;
//
//	}
//	for ( int i = 0; i < s1.size ( ); i++ ) {
//		it = original.find ( s1 [ i ] );
//		if ( it == original.end ( ) || ( it->second == 0 ) )
//			return false;
//		else
//			it->second--;
//
//	}
//	for ( it = original.begin ( ); it != original.end ( ); it++ ) {
//		if ( it->second>0 )
//			return  false;
//	}
//	return true;
//
//
//}
//int main ( )  {
//	string s , s1;
//	
//	cin.ignore ( );
//	getline ( cin , s );
//	getline ( cin , s1 );
//	
//	if ( isanagram ( s , s1 ) )
//		cout << "Yes";
//	else
//		cout << "No";
//
//}