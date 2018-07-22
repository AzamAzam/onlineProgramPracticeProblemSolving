#include <iostream >
#include <conio.h>
using namespace std;
int main ()
{
	char cnic[16];
	cout <<"Enter cnic :" ;
	for (int i=0;i<15;i++){
		if (i==5||i==13)
		{
		cnic[i]='-';
		cout <<"-";
	}
		else 
		{
			cnic[i]=getche();
			if (cnic[i]<'0'||cnic[i]>'9'){
				cout <<"\b \b";
				i--; 
			}
		}
	}
	cnic[15]='\0';
}
