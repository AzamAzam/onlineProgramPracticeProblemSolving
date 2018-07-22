/*BCSF15M017
MUHAMMAD AZAM
*/
#include "MyString.h"
#include <iostream>
#include <conio.h>

using namespace std;

MyString::MyString(int x)
{
	size =x;
	str = new char[size];

}
MyString::MyString()
{
	size = 500;
	str = new char[size];

}
void MyString::input(){
	int i;
	for ( i = 0;i<size; i++){
		 str[i]=_getche();
		if (str[i] == 13)
			break;

	}
	str[i] = NULL;
	cout  << endl;
}

void MyString::show(){

	cout << str << endl;
	
}
void MyString::printLeft(int x){
	int i;
	for (i = 0; i < x; i++){
		cout <<*(str + i);

	}
	cout << endl;

}



void MyString::printRight(int x){
	int i;		
	for (i=x-1; i <findLength(); i++){
		cout << *(str + i);

	}
	cout << endl;

}

int  MyString::findLength(){
	int i = 0;
	for (i = 0; *(str + i) != 0; i++);
	return i;
}

bool MyString::findSubstring(MyString x){
	int i,j,k,len_of_SubString;

	len_of_SubString = x.findLength();

	for (i = 0; str[i] != '\0'; i++)
	{
		k = i;
		for (j = 0; x.str[j] != '\0'; j++)
		{
			if (x.str[j] != str[k++])
				break;

		}
		if (j == len_of_SubString)
		{
			return true;
			break;
		}

	}
	if (j != len_of_SubString)
		return false;

}

void MyString::getSubstring(int x, int y){
	
	for (x=x-1;x<y;x++){
		cout << *(str + x);
	}
	cout << endl;
}

void MyString::toUpper()
{
	int i, j;	
	for (i = 0; str[i] != NULL; i++){
		if (*(str + i) >= 97 && *(str + i) <= 122)
			*(str + i) = *(str + i) - 32;
	}
	show();
	
}
void  MyString::toLower(){
		int i, j;
		for (i = 0; str[i] != NULL; i++){
			if (*(str + i) >= 65 && *(str + i) <= 90)
				*(str + i) = *(str + i) + 32;
		}
		show();
	
}

void MyString::alternateCase(){
	int i, j;
	for (i = 0; str[i] != NULL; i++){
		if (*(str + i) >= 65 && *(str + i) <= 90)
			*(str + i) = *(str + i) + 32;
	
		else if (*(str + i) >= 97 && *(str + i) <= 122)
			*(str + i) = *(str + i) - 32;
	
	}

	show();

}

int  MyString::findCharacterOccurances(char ch, int * count ){
	int index=0;
	for (int i = 0; *(str + i) != NULL; i++){
		if (*(str + i) == ch)
			count[index++]=i;
	}
	return index;
}
int MyString::findStringOccurances(MyString x, int *count)   //  find occurences sub_string
{

	int i, j, k, l, m = 0, counter = 0, locations = 0;

	for (i = 0; *(this->str + i) != '\0'; i++);
	k = i;                                           // length of sub string
	for (i = 0; *(x.str + i) != '\0' != '\0'; i++)
	{
		for (j = 0, l = i; *(this->str + j) != '\0'; j++, l++)
		{
			if ((*(x.str + i) == *(this->str + j) && *(x.str + k) == ' ') || (*(x.str + l) == *(this->str + j)))
				counter++;
			else
				counter = 0;
		}
		if (counter == k)
		{
			l = l - k;
			count[locations] = l;
			locations++;
		}
	}
	return locations;
}

void MyString::Rightconcetenate( MyString x ){
	MyString str3(size);
	Strcopy(*this ,str3);
	delete[] str;
	int len;
	len = x.findLength();
	str = new char[size + len];
	int i;
	for ( i = 0; str3.str[i] != 0; i++){
		str[i] = str3.str[i];

	}
	int j = i;
	for (i = 0; x.str[i] != 0; i++){
		str[j++] = x.str[i];

	}
	str[j] = NULL;

}
void MyString::LeftConcetenate(MyString x){
	MyString str3(size);
	Strcopy(*this, str3);
	delete[] str;
	int len;
	len = x.findLength();
	str = new char[size + len];
	int i;
	for (i = 0; x.str[i] != 0; i++){
		str[i] = x.str[i];

	}
	int j = i;
	for (i = 0; i<str3.findLength(); i++){
		str[j++] = str3.str[i];

	}
	str[j] = NULL;

}
void  MyString::Strcopy(MyString &x, MyString &y){

	
	
		int i;
		for (i = 0; x.str[i] != '\0'; i++)
		{
			y.str[i] = x.str[i];
		}
		y.str[i] = '\0';
	


}


void MyString::toProper()
{


	for (int i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)        // to change case of character of string, if it is small
			str[i] = str[i] - 32;

		else if (str[i] == '.' || str[i] == '?' || str[i] == '!')
		{
			// after dot and a space make character in uppercase, if it in lowercase
			i = i + 2;
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;

			else
				cout << str[i];

		}

		else if (i>0 && str[i] >= 65 && str[i] <= 90)    //to change middle uppercase characters into lowercase
			str[i] = str[i] + 32;

	}

}

