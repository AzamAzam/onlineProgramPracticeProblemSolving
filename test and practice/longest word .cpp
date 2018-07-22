#include <iostream>
#include <string>
using namespace std;
string  highestlength(string s){
	int max=0,i,j=0;
	string s1;
	for ( i = 0; i < s.length(); i++){
		if (s[i] == ' ' )
		{
			if ((i - j) > max)
			{
				max = i - j;
				s1 = s.substr(j, i - j);
			}
			else if ((i - j) == max)
				s1 = s1 + " " + s.substr(j, i - j);
			j = i+1;
		}
	}
	if ((i - j ) > max)
	{
		max = i - j ;
		s1 = s.substr(j, i - j);
	}
	else if ((i - j) == max)
		s1 = s1 + " " + s.substr(j, i - j);
	return s1;
}
int main()
{
	string s;
	getline(cin, s);
	cout <<highestlength (s) << endl;
//	cout << s;
}

