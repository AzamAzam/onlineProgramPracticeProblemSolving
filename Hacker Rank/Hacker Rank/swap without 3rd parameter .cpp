#include <iostream >
#include <conio.h>
using namespace std;
int  main ( ) {
	char ch1 , ch2;
	cout << "Enter first character : ";
	ch1 = _getche ( );
	cout << "\nEnter second character : ";
	ch2 = _getche ( );

	cout << "\nbefore swapping  " << ch1 << "   " << ch2 << endl;
	ch1 = ch1 + ch2;
	ch2 = ch1 - ch2;
	ch1 = ch1 - ch2;

	cout << "\nafter swapping  " << ch1 << "   " << ch2 << endl;
	return 0;
}