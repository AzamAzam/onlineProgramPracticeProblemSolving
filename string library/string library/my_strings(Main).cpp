#include"my_strings.h"
#include<iostream>
using namespace std;
void main()
{
	int size,left,right,start,end,value,length,count[40],k;
	char ch;
	//char str[1000],sub_str[100];
	cout << "Enter size of Array : ";
	cin >> size;
	my_strings string(size); 
	cout << "Enter a string : ";
	string.input();                            //input

	cout << "\nYou enter this string : ";
    string.show();                                       // show


	length = string.str_length();
	cout << "Length of your string is : " << length << endl;


	cout << "Enter the index number before that you want to see the string on its left : ";   // left
	cin >> left;
	while (left < 0)
	{
		cout << "You enter wrong , enter again : ";
		cin >> left;
	}
	string.left(left);


	cout << "Enter the index number from where you want to see the string upto end : ";   // right
	cin >> right;
	while (right>length)
	{
		cout << "You enter wrong , enter again : ";
		cin >> right;
	}
	string.right(right);

	cout << "Enter start index : ";
	cin >> start;
	cout << "Enter end index : ";
	cin >> end;
	string.mid(start,end);
	
	my_strings sub_string(100);                                                       // sub_string
	cout << "Enter a sub_string to find it in main string : ";
	sub_string.input();
	value = sub_string.find_sub_string(string);
	if (value)
		cout << "\nSub_string found\n";
	else
		cout << "\nSub_string not found\n";

	cout << "Your string in uppar case is : ";                                    // uppar case
	string.to_uppar();
	string.show();
	cout << "Your string in lower case is : ";                                   // lower case
	string.to_lower();
	string.show();
	cout << "\nYour string in Alternative case is : ";                           // alternative case
	string.to_alternate_case();
	string.show();
	cout << "Your string in Proper case is : ";                                 // proper case
	string.to_proper();
	string.show();
	
	cout << "Enter a character to find its all occurences in string of alternative case : ";       // occurences
	cin >> ch;
	k =  string.find_occurences_of_a_character(ch, count);
	cout << "The character " << ch << " occures on locations : ";
	for (int i = 0; i<k; i++)
		cout << count[i]+1 << ",";
	cout << endl;
	cout << "Enter a character to remove from string of alternative case : ";
	cin >> ch;
	string.remove_character(ch);
	cout << "After removing " << ch << " string is \n";
	string.show();
	cout << "Enter a sub_string : ";
	sub_string.input();
	k =  sub_string.find_occurences_of_a_string(string, count);
	cout << "\nThe sub_string  occures  "<<k<<" times with starting locations : ";
	for (int i = 0; i<k; i++)
		cout << count[i] + 1 << ",";

}