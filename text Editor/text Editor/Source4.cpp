#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>

void up(char [][120]);
void down(char[][120]);
void left(char[][120]);
void right(char[][120]);
void removech(char[][120]);
void enter(char[][120]);
void end(char[][120]);
void home(char[][120]);
void pgup();
void pgdown(char [][120]);
int leng(char[][120],int);
int arrayUsed(char[][120]);
//void insertch(char [][120]);
//void insertarray(char[][120]);

void gotoxy(short int x, short int y)
{
	COORD cur = { x, y }; SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cur);
}

int row = 0, colm = 0;
using namespace std;
int main()
{
	
	int i = 0,insertkey=0,lengthofLine=0,lines=0;
	char ch, str[1000][120] = {0};
	
	
	do
	{
		gotoxy(colm, row);
		ch = _getch();
		if (ch <= 0)
		{

			ch = _getch();
			if (ch == 72)																	//up
			{

				up(str);
				//		cout << "UP ";
			}
			else if (ch == 80)
			{
				down(str);
				//		cout << "Down";

			}
			else if (ch == 75)
			{
				left(str);

				//				cout << "LEft ";					
			}
			else if (ch == 77)
			{
				right(str);
				//right 

			}
			else if (ch == 79)
			{
				end(str);
					
				//			cout << "end ";							//it is end of line* 
			}
			else if (ch == 71)
			{
				home(str);
				//		cout << "HOme ";
			}
			else if (ch == 83)
			{

				removech(str);
//				cout << "delete ";
			}
			else if (ch == 82)
			{
				//	insertch(str);

				cout << "insert ";
			}
			else if (ch == 81)
				pgdown(str);
				// pagedown*
				//	cout << "pgdown ";
			
			else if (ch == 73)
			{
				pgup();
				//	cout << "pageUP ";
			}
			//		else if (ch == 11)
			//		cout << "tab ";

		}
		else if (ch == 13)
		{
			str[row][colm] =32;
			row++;
			colm = 0;
						
			
		//	i = 0;
			//		cout << "Enter ";
		}
		else if (ch == 8)				//backspace
		{
			
			if (colm>=0)
			{
				removech(str);
				
				if (colm == 0 && row > 0)
				{
					row--;
					colm = leng(str,row);
				}
				if (colm>0)
					colm--;
			//	cout << "\b ";

			}

		   
		}


		else if (ch != '!')
		{
			str[row][colm] = ch;


				cout << ch;
			colm++;
		}
		if (colm > 119)
		{
			row++;
			colm = 0;
		}
		



	}

	while (ch != '!');
	
	
	cout << endl;
	//for (int i = 0; i <= row; i++)											// string output
	//{
	//cout << str[i]<<endl;
	//}
	

}
int leng(char string[][120], int R)
{
	int i;
	for (i = 0; string[R][i] != NULL; i++);
	return i;
}
int arrayUsed(char string[][120])
{
	int R;
	for (R = 0; leng(string, R) != NULL; R++);
	return R;
}
//void insertarray(char string [][120])
//{
//	int i;
//	int n = arrayUsed(string)
//	for (i = n;)
//}
void up(char string [][120])
{

	if (row > 0)
	{
		int lengthofLine;

		row--;
		lengthofLine = leng(string, row);
		if (lengthofLine < colm)
			colm = lengthofLine;
	}
}
void down(char string[][120])
{
	int lines = 0, lengthofLine;
	if (lines < arrayUsed(string))
	{
		lines = arrayUsed(string);
	}
	if (row < lines)
		row++;
	lengthofLine = leng(string , row);
	if (lengthofLine < colm)
		colm = lengthofLine;
}
void left(char string[][120])
{
	if (colm > 0)
		colm--;
	else if (colm == 0 && row > 0)
	{
		row--;

		colm = leng(string, row);
	}
}
void right(char string[][120])
{
	int lengthofLine;
	lengthofLine = leng(string, row);
	if (colm < lengthofLine)
		colm++;

	else
	if (colm == 119)
	{
		colm = 0;
		row++;
	}
}
void removech(char string[][120])
{
	int i;


		for (i = colm; string[row][i] != NULL; i++)
		{
			string[row][i] = string[row][i + 1];
			cout << string[row][i];
		}
}
void end (char string[][120])
{
	int lengthofLine;
	if (colm < 119)
	{
		lengthofLine = leng(string, row);
		if (lengthofLine < 119)
			colm = lengthofLine;
		else
			colm = 119;
	}
}
void home(char string[][120])
{
	if (colm>0)
		colm = 0;
}
void pgdown(char string [][120])
{
	if (arrayUsed(string) > 29)
	{
		row = row + 28;
	}
}
void pgup()
{


	if (row > 29)
		row = row - 10;
	else
		row = 0;
}