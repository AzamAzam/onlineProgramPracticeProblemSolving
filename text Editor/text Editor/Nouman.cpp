//#include <iostream>
//#include <conio.h>
//#include <windows.h>
//void gotoxy(short int x, short int y)
//{
//	COORD cur = { x, y }; SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cur);
//}
//
//
//using namespace std;
//int main()
//{
//	char ch = 'A';
//	int row_count = 0, col_count = 1;
//	cout << "enter data\n";
//	while (ch != 'z')
//	{
//		ch = _getch();
//		if (ch == 13)
//		{
//			cout << endl;
//			row_count = 0;
//			col_count++;
//			//gotoxy(row_count,col_count);
//		}
//		else if (ch <= 0)
//		{
//			ch = _getch();
//
//			if (ch == 77 || ch == 75 || ch == 72 || ch == 80)
//			{
//				if (ch == 80)            //down
//				{
//					gotoxy(row_count, ++col_count);
//				}
//				else if (ch == 72)      //up
//				{
//					gotoxy(row_count, --col_count);
//				}
//				else if (ch == 77)    //right
//				{
//					gotoxy(++row_count, col_count);
//				}
//				else                //left
//				{
//					gotoxy(--row_count, col_count);
//				}
//
//			}
//
//		}
//		else
//		{
//			cout << ch;
//			row_count++;
//		}
//
//	}
//	cout << endl;
//	_getch();
//	system("pause");
//	return 0;
//}
//
//
//
