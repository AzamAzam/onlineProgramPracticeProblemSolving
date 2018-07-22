#include<iostream>
using namespace std;
int searchchar(char str[], char ch);
int main()
{

	char ch, str[100];
	cout << "enter a string : ";
	cin.getline(str, 100);
	str[100] = '\0';

	cout << " enter character you want to find : ";
	cin >> ch;
	cout << " last occurence of " << ch << " was found on  location " << searchchar(str, ch) << endl;


	cout << endl;
	system("pause");
}
int searchchar(char str[], char ch)
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ch)
		{

			if (i>count)
				count = i;

		}

	}
	return count;
}