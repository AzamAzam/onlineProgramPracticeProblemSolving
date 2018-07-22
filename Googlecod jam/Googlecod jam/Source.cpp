#include <iostream >
#include <fstream>
int* keychanged(char[]);
using namespace std;
int main()
{
	
	int i=1,j, n,index=0,lastindex=-1;
	char str[1004];
	//int str2[];
	ifstream infile;
	ofstream outfile;
	
	char alphabets[27];
	int keysPressed[27] = { 2, 22, 222, 3, 33, 333, 4, 44, 444, 5, 55, 555, 6, 66, 666, 7, 77, 777, 7777, 8, 88, 888, 9, 99, 999, 9999,0 };
	int keycomp[27] = { 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9, 0 };
	
	for (int i = 0; i < 26; i++){
		alphabets[i] = 'a'+i  ;
		//cout << alphabets[i];
	}
	alphabets[26] = ' ';

	infile.open("C-large-practice.in");
	infile.getline(str, 1004);
	n = atoi(str);
//	cout << n;
	outfile.open("C-large-practice.out");
	while (i <= n)
	{
		infile.getline(str, 1004);
		
		j = 0;
		outfile<< "case #" << i << ": ";
		while (str[j] != NULL){
			for (index = 0; index < 26; index++){
				if (str[j] == alphabets[index])
					break;
			}
			if (keycomp[ lastindex ]== keycomp [index])
				outfile << " ";

			outfile << keysPressed[index];
				

				lastindex = index;
			j++;
		}
		outfile << endl;
		lastindex = -1;
		i++;

	}
	infile.close();
	outfile.close();
	cout << "Program is working " << endl;
}
