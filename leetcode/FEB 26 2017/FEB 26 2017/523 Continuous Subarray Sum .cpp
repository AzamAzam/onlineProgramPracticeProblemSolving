#include <iostream>
#include <map>
#include <vector>
#include <string >
using namespace std;
string findLongestWord ( string s , vector<string>& d ) {
	multimap <int , string> map;
	multimap <char , int > map1;
	multimap <char , int > map2;
	multimap <int , string > ::iterator it;
	typedef  pair<int , string> p;
	typedef  pair<char , int> p1;
	multimap <char,int > ::iterator it1;
	map.insert ( p ( 0,"" ));
	for ( int i = 0; i < d.size ( ); i++ ) {

		map.insert ( p ( d [ i ].size ( ) , d [ i ] ) );

	}
	for ( int i = 0; i < s.size ( ); i++ ) {
		it1 = map1.find ( s [ i ] );
		if ( it1 != map1.end ( ) )
			it1->second++;
		else 
		map1.insert ( p1 ( s [ i ] , 1 ) );
	}
	it = map.end ( );
	for ( it--; it != map.begin ( ); it-- ) {
		string  s1 = it->second;

		map2 = map1;
		int i = 0;
		for ( ; i < s1.size ( ); i++ ) {
			it1 = map2.find (s1[i] );
			if ( it1 != map2.end ( ) && it1->second>0 )
				it1->second--;
			else break;
		}
		if ( i == s1.size ( ) )
			return s1;
	}
	
	return "";

}
int main ( )  {
	vector<string > d = { };
	cout << findLongestWord ( "abpcplea" , d );
	
}
