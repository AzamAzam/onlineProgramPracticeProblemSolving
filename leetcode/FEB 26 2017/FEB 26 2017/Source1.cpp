//#include <iostream>
//#include <map>
//#include <vector>
//#include <string >
//using namespace std;
//
//bool checkSubarraySum ( vector<int>& nums , int k ) {
//	int sum = 0;
//
//	for ( int i = 0; i<nums.size ( ); i++ ) {
//		sum = i;
//		for ( int j = i + 1; j<nums.size ( ); j++ ) {
//			sum = sum + nums [ j ];
//			if ( k == 0 ) {
//				if ( sum == 0 )
//					return true;
//			}
//			else if ( sum%k == 0 )
//				return true;
//
//		}
//
//	}
//	return false;
//
//}
//int main ( )  {
//	vector<int> v = { 1,1 };
//	int k = 2;
//	cout <<checkSubarraySum ( v , k );
//	
//}
//
