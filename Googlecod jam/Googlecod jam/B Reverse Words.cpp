#include <iostream>
#include <fstream>
#include <string>
void wordRevese(char[]);
using  namespace std;
int main()
{
	char str[1005];
	int i=0,n=0;
	ifstream infile;
	ofstream outfile;

	infile.open("large.in");
	/*if (infile.is_open()){
		cout << infile.is_open();
	}*/
	
	infile.getline(str,1004);
	n = atoi(str);
//	cout << n;
	outfile.open("changed.out");
	while(i<n)
	{
		infile.getline(str, 1004);
		wordRevese(str);
		if (i < n - 1)
			outfile << "Case #" << i + 1 << ": " << str<<endl;
		else 
			outfile << "Case #" << i + 1 << ": " << str;
		cout<<"case #"<<i+1 <<": "<< str<<endl ;
		i++;
	}
	outfile.close();
	infile.close();
}
void wordRevese(char string[])
{
	int spaceindex[500] = {-1};
	int i, k=0, j = 0;
	char string2[1004];
	for (i = 0; string[i] != NULL; i++)
	{
		string2[i] = string[i];					//copy string 
	}
	string2[i] = NULL;
	for (i = 0; string2[i] != NULL; i++)
	{
		if (string2[i] == 32 && string2[i + 1]<'z'&& string2[i + 1]>'0')
		{
			spaceindex[j++] = i;
		}
	}
	if (spaceindex[0] == -1)
		spaceindex[0] = i;
	k = 0;
	for (--j; j >= 0; j--)
	{
		for (i = spaceindex[j] + 1; string2[i] != 32 && string2[i] != NULL; i++)
		{
			string[k++] = string2[i];
		}
		string[k++] = ' ';
	}
	
	for (i = 0; i < spaceindex[0]; i++)
	{
		string[k++] = string2[i];
	}
	string[k] = NULL;
}
