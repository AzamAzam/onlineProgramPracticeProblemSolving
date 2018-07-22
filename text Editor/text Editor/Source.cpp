//#include <iostream>
//#include <fstream>
//#include <conio.h>
//#include <windows.h>
//void insert();
//void delt();
//void gotoxy(short int x, short int y)
//{
//	COORD cur = { x, y }; SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cur);
//}
//
//
//using namespace std;
//int main()
//{
//	int i = 0;
//	char ch, str[1000][120] = {0};
//	int row=0, colm=0;
//	ifstream filin;
//	ofstream filout;
//	//writing file 
//	filout.open("Azam.txt");
//	/*cout <<"writing file  ";
//	cin.getline(str, 1000);
//	filout << str;
//	filout.close();
//	
//	cout << "reading file";
//	filin.open("Azam.txt"); 
//	
//	filin.getline  (str,100);
//	cout << str;
//	*/
//	do
//	{
//		ch = _getch();
//		if (ch <= 0)
//		{
//
//			ch = _getch();
//			if (ch == 72)																	//up
//			{
//
//				if (row > 0)
//					row--;
//				//		cout << "UP ";
//			}
//			else if (ch == 80)
//			{
//				row++;
//				//		cout << "Down";
//
//			}
//			else if (ch == 75)
//			{
//				if (colm > 0)
//					colm--;
//
//				//				cout << "LEft ";					//* 
//			}
//			else if (ch == 77)
//			{
//				if (colm < 119)
//					colm++;
//				//			cout << "RIGHT ";
//				else 
//				if (colm == 119)
//				{
//					colm = 0;
//					row++;
//				}
//			}
//			else if (ch == 79)
//			{
//				if (colm < 119)
//					colm = 119;
//				//			cout << "end ";							//it is end of line* 
//			}
//			else if (ch == 71)
//			{
//				if (colm>1)
//					colm = 0;
//				//		cout << "HOme ";
//			}
//			else if (ch == 83)
//				cout << "delete ";
//			else if (ch == 82)
//				cout << "insert ";
//			else if (ch == 81)
//			{
//				row = row + 29;				// pagedown*
//			//	cout << "pgdown ";
//			}
//			else if (ch == 73)
//			{
//				if (row > 29)
//					row = row - 29;
//				else
//					row = 0;
//			//	cout << "pageUP ";
//			}
//	//		else if (ch == 11)
//		//		cout << "tab ";
//			
//		}
//		else if (ch == 13)
//		{
//			row++;
//			colm = 0;
//			
//			str[row][colm] = NULL;				
//			i = 0;
//			//		cout << "Enter ";
//		}
//		else if (ch == 8)				//backspace
//		{
//			if (colm == 0 && row > 0)
//			{
//
//
//				row--;
//				colm = 119;
//			}
//			else if (colm > 0)
//			{
//				colm--;
//
//				cout << "\b ";
//			}
//		}
//		
//		
//		else if (ch!='!')
//		{
//			str[row][colm] = ch;
//			cout <<str[row][colm];
//			colm++;
//		}
//		if (colm > 119)
//		{
//			row ++;
//			colm = 0;
//	}
//		gotoxy(colm, row);
//		
//
//		
//	}
//	
//    while (ch!='!');
////	filout << str;
//	//str[row][colm] = NULL;
//	
//	/*for (int i = 0; i <= row; i++)											// string output 
//	{
//		cout << str[i]<<endl;
//	}*/
//	filout.close();
//
//
////	system("pause ");
//
//}