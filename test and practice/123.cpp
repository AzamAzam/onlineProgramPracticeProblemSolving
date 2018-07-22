#include<iostream>
# include <conio.h>
using namespace std ;

  int main()
{
   int i,j;
   i=1;
   while(i<=3)
   {
	   j=i;
   	while(j>=1)
	{
		if(j==3)
  {
  	cout<< j<<" ";
   	j=j+3; 
	        }
   	else
   	if(j==5)
   {
	   cout<< j<<" ";
     	j=j-4;
    	cout<<j;
		                }
	
   	else
   cout<<j<<" ";
	j--; 
	}
		cout<<endl ;
	i++;
   }
   getch();

}
