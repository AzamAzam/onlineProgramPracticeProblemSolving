//#include<iostream>
//#include <string>
//#include<vector>
//using namespace std;
//
////int findLonelyPixel ( vector<vector<char>>& picture ) {
////	int c, r = picture.size ( )-1;
////	int count=0;
////	if (r )
////	 c = picture [ 0 ].size ( )-1;
////	for ( int  i = 0; i <=r; i++ ) {
////		for ( int j = 0; j <= c; j++ ) {
////			if ( picture [ i ][ j ] == 'B' ) {
////				if ( ( j + 1>c || j + 1<=c &&picture [ i ][ j + 1 ] != 'B' ) 
////					&& ( j - 1<0 || j - 1 >= 0 && picture [ i ][ j - 1 ] != 'B' ) 
////					&& ( i + 1>r || i + 1<=r &&picture [ i + 1 ][ j ] != 'B' ) 
////					&& ( i - 1<0 || i - 1 >= 0 && picture [ i - 1 ][ j ] != 'B' ) )
////					count++;
////			}			  
////		}
////
////	}
////	return count;
////
////}
////int main ( )  {
////	vector<vector<char>>  n =
////	{ { 'W' , 'W' , 'B' } 
////	, { 'W' , 'B' , 'W' } 
////	, { 'B' , 'W' , 'W' } };
////	cout << findLonelyPixel ( n);
////}
//
//
//int main ( ) {
//	char a [ 3 ][ 3 ];
//	int count = 0;
//
//	for ( int r = 0; r < 3; r++ ) {
//		for ( int c = 0; c < 3; c++ ) {
//			cin >> a [ r ][ c ];
//		}
//	}
//	cout << "input over\n";
//
//	for ( int r = 0; r < 3; r++ ) {
//		for ( int c = 0; c < 3; c++ ) {
//			if ( a [ r ][ c ] == 'B' ) {
//				int r1 , c1 = 0;
//				bool flag1 , flag2;
//				while ( c1<3 )		// falg1 = true; 
//				{
//					if ( c1 != c ) {
//						if ( a [ r ][ c1 ] == 'B' ) {
//							flag1 = false;
//							break;
//						}
//					}
//
//					c1++;
//				}
//				if ( c1 == 3 )
//					flag1 = true;
//				if ( flag1 ) {
//					r1 = 0;
//					while ( r1<3 )		// falg2 = true; 
//					{
//						if ( r1 != r ) {
//							if ( a [ r1 ][ c ] == 'B' ) {
//								flag2 = false;
//								break;
//							}
//						}
//
//						r1++;
//					}
//				}
//				if ( r1 == 3 )
//					flag2 = true;
//				if ( flag1 == true && flag2 == true )
//					count++;
//			}
//		}
//	}
//	cout << count << endl;
//}