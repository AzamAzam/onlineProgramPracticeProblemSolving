#include <iostream>
using namespace std;
const int N = 16;
void bubblesort ( int [ ] );
void selectionSort ( int [ ] );
void insertionSort ( int [ ] );
void mergsorting ( int [ ] );
int main ( ) {
	//int start = 0;
//	int end = 15;
//	int arr [ 16 ] = { 5 , 14 , 10 , 27 , 45 , 30 , 50 , 7 , 20 , 40 , 37 , 43 , 10 , 14 , 50 , 53 };
	int arr2 [ 16 ] = { 1 , 2 , 3 , 5 , 7 , 11 , 13 , 17 , 19 , 21 , 23 , 19 , 31 , 37 , 39 , 41 };
	//int arr3 [ 16 ] = { 30 , 28 , 26 , 24 , 22 , 20 , 18 , 16 , 14 , 1 , 2 , 10 , 8 , 6 , 4 , 2 };
	//	bubblesort ( arr );
	//selectionSort ( arr3 );
	//insertionSort ( arr2 );
	mergsorting ( arr2 );
	return 0;
}

void bubblesort ( int a [ ] ) {
	cout << "Bubble Sorted Array" << endl;

	int i , j , count = 0;
	for ( i = 0; i < N; i++ ) {

		for ( j = 0; j < N - ( i + 1 ); j++ ) {
			count++;
			if ( a [ j ] >= a [ j + 1 ] ) {
				swap ( a [ j ] , a [ j + 1 ] );

			}

		}

	}

	cout << " Ascending Order : ";

	for ( int i = 0; i < N; i++ )
		cout << " " << a [ i ];
	cout << endl;
	cout << "Time :  " << count << endl;
}

void selectionSort ( int a [ ] ) {
	cout << "Selection Sort: " << endl;

	int count = 0;
	int i , j , mini , minindex;
	for ( i = 0; i < N; i++ ) {
		mini = a [ 0 ];
		for ( j = 0; j < N - i; j++ ) {
			count++;
			if ( a [ j ] >= mini ) {
				mini = a [ j ];
				minindex = j;
			}
		}

		swap ( a [ minindex ] , a [ j - 1 ] );
	}

	cout << "Ascending Order";

	for ( i = 0; i < N; i++ )
		cout << " " << a [ i ];
	cout << endl;
	cout << "Time :  " << count << endl;
}
void insertionSort ( int a [ ] ) {
	cout << "Insertion Sort: " << endl;

	int i , count = 0;

	for ( i = 1; i < N; i++ ) {
		for ( int j = i; j>0; j-- ) {
			count++;
			if ( a [ j ] < a [ j - 1 ] )
				swap ( a [ j ] , a [ j - 1 ] );
			else break;

		}
	}
	cout << "Ascending Order";

	for ( i = 0; i < N; i++ )
		cout << " " << a [ i ];
	cout << endl;
	cout << "Time :  " << count << endl;


}/*
void split (int A[],int p,int r ) {
if ( p < r ) {
int q = ( p + r ) / 2;
split ( A , p , q );
split ( A , q + 1 , r );
}
else
return;
}*/


void split ( int A [ ] , int start , int end ) {
	if ( start >= end )
		return;
	int mid = ( start + end ) / 2;
	split ( A , start , mid );
	split ( A , mid + 1 , end );
}

void mergesorting ( int B [ ] ) {
	split ( B , 0 , 8 );
	cout << " ";
}

