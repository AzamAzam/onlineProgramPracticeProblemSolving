#include"my_strings.h"
#include<iostream>
#include<conio.h>
using namespace std;
 
my_strings::my_strings(int s)
{
	size = s;
	str = new char[size];
}

void my_strings::input()
{
	int i;
	for ( i = 0; i < size; i++)
	{
		str[i] = _getche();
		if (str[i] == 13)
			break;
	}
	str[i] = '\0';
}

void my_strings::show()      // show
{
	cout << str << endl;
}

void my_strings::left(int size)         //left
{
	cout << "\nThe string on left of given positon is : ";
	for (int i = 0; i<size; i++)
		cout << *(str+i);
	cout << endl;
}


void my_strings::right(int size)         // right
{
	cout << "\nThe string from given index up to end is : ";
	for (int i = size; *(str+i)!='\0'; i++)
		cout << *(str+i);
	cout << endl;
}

void my_strings::mid(int start, int end)     // mid
{
	cout << "The string from middle is : ";
	for (start; start < end; start++)
		cout << *(str+start);
	cout << endl;
}

int my_strings::str_length()                //  length
{
	int i;
	for (i = 0; *(str+i) != '\0'; i++);
	return i;
}

int my_strings::find_sub_string(my_strings s)   //  find sub_string
{

	int i, j, k, l, count = 0;

	for (i = 0; *(this->str+i) != '\0'; i++);
	k = i;                                           // length of sub string
	for (i = 0; *(s.str+i)!='\0' != '\0'; i++)
	{
		for (j = 0, l = i; *(this->str + j) != '\0'; j++, l++)
		{
			if ((*(s.str + i) == *(this->str + j) && *(s.str + k) == ' ') || (*(s.str + l) == *(this->str + j)))
				count++;
			else
				count = 0;
		}

		if (k == count)
			break;
	}
	if (k == count)
		return 1;
	else
		return 0;
}

void my_strings::to_uppar()              //  uppar_case
{
	for (int i = 0; *(str+i) != '\0'; i++)
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
			*(str + i) = *(str + i) - 32;
	}
}

void my_strings::to_lower()              //  lower_case
{
	for (int i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) >= 65 && *(str + i) <= 90)
			*(str + i) = *(str + i) + 32;
	}
}

void my_strings::to_proper()
{
	
	//cout << str << endl;
	for(int i=0;str[i]!='\0';i++)
	{
	if(i==0&&str[i]>=97&&str[i]<=122)        // to change case of character of string, if it is small
		str[i]=str[i]-32;

	else if(str[i]=='.')
	{
	//cout<<".";                         // after dot and a space make character in uppercase, if it in lowercase
		i=i+2;
	if(str[i]>=97 && str[i]<=122)
		str[i]=str[i]-32;

	else
	    cout<<str[i];

	}

	else if(i>0&&str[i]>=65&&str[i]<=90)    //to change middle uppercase characters into lowercase
			str[i]=str[i]+32;

	}

}

void my_strings::to_alternate_case()                 // alternative
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		else if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}

}

int my_strings::find_occurences_of_a_character(char ch, int count[])        // occurences of a character
{
	int counter = 0;
	for (int i = 0; *(str+i) != '\0'; i++)
	{
		if (*(str + i) == ch)
		{
			count[counter] = i;
			counter++;
		}
	}
	return counter;
}

void my_strings::remove_character(char ch) // character removing 
{
	int j = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ch)
		{
			str[j] = str[i];
			j++;
		}
	}
	str[j] = '\0';
}


int my_strings::find_occurences_of_a_string(my_strings s, int count[])   //  find occurences sub_string
{

	int i, j, k, l, m = 0, counter = 0, locations = 0;

	for (i = 0; *(this->str + i) != '\0'; i++);
	k = i;                                           // length of sub string
	for (i = 0; *(s.str + i) != '\0' != '\0'; i++)
	{
		for (j = 0, l = i; *(this->str + j) != '\0'; j++, l++)
		{
			if ((*(s.str + i) == *(this->str + j) && *(s.str + k) == ' ') || (*(s.str + l) == *(this->str + j)))
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