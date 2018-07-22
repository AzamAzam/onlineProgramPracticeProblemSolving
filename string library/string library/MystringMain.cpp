/*BCSF15M017
MUHAMMAD AZAM 
*/

#include "MyString.h"
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int size, n,start ,end, counter ,count [50] ;
	bool value;
	char ch;


	cout << "Enter  possible size of Arrray : ";
	cin >> size;
	MyString str(size),subStr;

	cout << "Enter a String : \n";
	str.input();
	str.show();
	
	cout << "Length of String = " << str.findLength() << endl;


	cout << "Enter the index Number You want to see from the Strnig from the left : ";
	cin >> n;
	str.printLeft(n);

	

	cout << "Enter the index Number You want to see from the Strnig to  the Right  : ";
	cin >> n;
	str.printRight(n);

	cout << "Enter a subString to find in the String : ";
	subStr.input();
	value=str.findSubstring(subStr);
	if (value)
		cout << "SubString Found ";
	else
		cout << "SubSting Not Found ";
	cout << endl;

	cout << "Enter Starting index and Ending Index : ";
	cin >> start >> end;
	str.getSubstring(start, end);

	cout << "Alternate Case : \n";
	str.alternateCase();
	cout << "UPPER CASE : \n" ;
	str.toUpper();
	cout << "lower case : \n";
	str.toLower();
	cout << "Proper Case : \n";
	str.toProper();
	str.show();


	cout << "Enter a character to find its occurences : ";
	ch = _getche();
	cout << endl;
	counter = str.findCharacterOccurances(ch, count);
	cout << ch << " is on these locations : ";
	for (int i = 0; i < counter; i++){
		cout << count[i] << ", ";
	}
	cout << endl;

	cout << "Enter Substring to find its occurences : ";
	subStr.input();
	counter=str.findStringOccurances(subStr, count);
	cout << "SubString  is on these locations : ";
	for (int i = 0; i < counter; i++){
		cout << count[i] << ", ";
	}
	cout << endl;

	cout << "ENTER String to cancatenate : ";
	subStr.input();
	str.Rightconcetenate(subStr);
	str.show();
	cout << endl;

	
}
