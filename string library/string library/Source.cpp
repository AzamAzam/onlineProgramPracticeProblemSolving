#include <iostream>
int strlength(char[]);
void strcopy(char[], char[]);
int subfinder(char [], char []);
void strncopy(char[], char[], int);
int strcompare(char[], char[]);
int strncompare(char[], char[],int );
int memfind(char [], char , int []);

using namespace std;
int main()
{
	int count[20], k;
	int i, n;
	char ch, str[500], str1[500] = { 0 };

	{	
		bool value;
		cout << "string" << endl;
		cin.getline(str, 100);
		cout << "to be found :" << endl;
		cin.getline(str1, 20);
		value = subfinder(str, str1);
		if (value)
			cout << " substr found";
		else
			cout << " not found\n";
	}
	//cin.getline(str1, 500);
	//cout << "Length of string  " << strlength(str) << endl;				//strlength call
	//cout << "How many characters you want to compare  :";
	//cin >> n;
	//	strncopy(str,str1,n);												//strcopy call
	/*i = strncompare(str,str1,n);									// string compare call
if (i == 0)
cout << "both are equal till  "<<n<<"NUmbers ";

else if (i == 1)
cout << "both are not  equal ";
else
cout << "You entered  larger Number ";*/



	{
		cout << " enter character you want to find : ";
		cin >> ch;
		k = memfind(str, ch, count);
		cout << ch << " occures on locations : ";
		for (int i = 0; i < k; i++)
			cout << count[i] + 1 << ",";
	}
	system("pause ");
}
int strlength(char string[])
{
	int i;

	for (i = 0; string[i] != '\0'; i++);
	return i;
}
void strcopy(char string1[], char string2[])
{
	int i;
	for (i = 0; string1[i] != '\0'; i++)
	{
		string2[i] = string1[i];
	}
	string2[i] = '\0';
}
void strncopy(char string1 [], char string2[], int n)
{
	int i;
	i = strlength(string1);
	if (i >= n)
	{

		for (i = 0; i<n; i++)
		{
			string2[i] = string1[i];
		}
		string2[i] = '\0';
	}
	else
	{
		cout << "you entered awrong choice of characters ";

	}
}
int strcompare(char string1[], char string2[])
{
	int i,l1,l2;
	l1 = strlength(string1);
	l2 = strlength(string2);
	if (l1 == l2)
	{
		for (i = 0; string1[i] != NULL; i++)
		{
			if (string1[i] == string2[i]);

			else
				return 1;
		}
		if (i = l1)
			return 0;
	}
	else
		return 1;
}
int strncompare(char string1[], char string2[], int n)
{

	int i;
	
	int l1, l2;
	l1 = strlength(string1);
	l2 = strlength(string2);
	if (n <= l1&&n <= l2)
	{

		for (i = 0; i < n; i++)
		{
			if (string1[i] == string2[i]);

			else
				return 1;
		}
		if (i == n + 1)
			return 0;


	}
	else
		return 2;
}
int memfind(char str[], char ch, int count[])
{
	int k = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ch)
		{
			count[k++] = i;

		}

	}
	return k;
}
int subfinder(char str[], char rmv[])
{

	int i, j, k, l, count = 0;

	for (i = 0; rmv[i] != '\0'; i++);
	k = i;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0, l = i; rmv[j] != '\0'; j++, l++)
		{
			if ((str[i] == rmv[j] && str[k] == ' ') || (str[l] == rmv[j]))
				count++;
			else
				count = 0;
		}

		if (k == count)
			break;
	}
	cout << "k : " << k << endl << "count : " << count << endl;
	if (k == count)
		return 1;
	else
		return 0;

}