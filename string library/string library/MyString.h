/*BCSF15M017
MUHAMMAD AZAM
*/
#ifndef MYSTRING_H
#define MYSTRING_H
class MyString
{
	int size;
	char *str;
public:
	MyString(int );
	MyString();
	void input();
	void show(); 
	void printLeft(int );
	void printRight(int );
	void printFromRight(int);//?
	void mid();  //?
	int  findLength();

	bool findSubstring(MyString);
	void getSubstring(int ,int );

	void toUpper();
	void toLower();
	void toProper();
	void alternateCase();
	

	void Rightconcetenate(MyString);
	void LeftConcetenate(MyString);
	int  findCharacterOccurances(char , int *);
	int  findStringOccurances(MyString,int *);
	void removeCharacter();
	void removeSubString();
	
	void  Strcopy(MyString & ,MyString &);



};
#endif 