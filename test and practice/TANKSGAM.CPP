#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <iostream.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip.h>

	 char *name2;

	 struct tank{

	 int x;// column
	 int y;// row
	 int direction;

	 };


	int rectangle()
	{


	int gdriver = DETECT, gmode;

	initgraph(&gdriver, &gmode, "c:\\borlandc\\bgi");

	settextstyle(SOLID_FILL,0,5);
	moveto(60,50);
	setcolor(GREEN);
	outtext("WELCOME TO TANK FIGHT");
	setcolor(WHITE);

	settextstyle(SOLID_FILL,0,3);
	moveto(160,150);
	setcolor(GREEN);
	outtext("   DEVOLPED BY ");
	cout<<endl<<endl;
	moveto(150,200);

	outtext("   MEHMET UYMAN ");
	cout<<endl;
	moveto(120,250);

	outtext("  SYED BAHADUR ALI NAQVI ");

	settextstyle(SOLID_FILL,0,4);
	moveto(70,300);
	outtext("  FINAL PROJECT BS(SE)F08");

	setcolor(WHITE);

	setcolor(GREEN);

   //	Rectangle for barder.//

	rectangle(1,1,635,470);

	settextstyle(SOLID_FILL,0,1);
	moveto(50,400);

	outtext("ENTER YOUR NAME HERE :");
	setcolor(WHITE);

	setcolor(GREEN);

   //	rectangle for name//

	rectangle(40,395,550,430);

	gotoxy(39,26);
	char name[30];

	cin.getline(name,20,'\n');
	name2=new char[strlen(name)+1];
	strcpy(name2,name);


	closegraph();
	return 0;

	}







void drawTank(int y)
{

	gotoxy(1,y);
	cout<<"...";
	gotoxy(1,y+2);
	cout<<">>>=*";
	gotoxy(1,y+3);
	cout<<"...";
	gotoxy(40,1);
}


void removeTank(int y)
{


	if(y<24 && y>=4)
	{
	gotoxy(1,y);
	cout<<"     ";
	gotoxy(1,y+2);
	cout<<"     ";
	gotoxy(1,y+3);
	cout<<"     ";
	}
}

void fire(int y,int a,int ey)
{
	int x=6,end=79;
	gotoxy(x,y+2);
	cout << "*";
	if(y+2==ey)
	end=a;

	while(x<end)
	{
		delay(10);
		gotoxy(x,y+2);
		cout << " ";
		x++;
		if(kbhit())
		getch();
		gotoxy(x,y+2);
		cout << "*";
	}
	gotoxy(x,y+2);
	cout << " ";
	gotoxy(79,1);



}
void   game()
{
	int key=0;
	int position=4;

	randomize();
	int enemyy=rand()%12+6;
	int enemy=rand()%5+1;
	int enemyx=rand()%70+10;
	int score=0;
	gotoxy(enemyx,enemyy);
	cout << (char)enemy;
	gotoxy(79,1);
	int bullet=20;
	while(key!=27)
	{

	if(kbhit())
	{
		key=getch();

		if(key==0)
		key=getch();


		if(key==80)
		{
		    removeTank(position);
		    position++;

		    if(position>22)
		    position--;
		    drawTank(position);

		}

		if(key==72)
		{

		  removeTank(position);
		 position--;
		 if(position<4)
		 position++;
		 drawTank(position);

		}
		if(key==32)
		{

			fire(position,enemyx,enemyy);
			bullet--;
			if(position+2==enemyy)
			{
			score+=10;
			if(score>140)
			break;

			enemyy=rand()%12+6;
			enemy=rand()%5+1;
			enemyx=rand()%70+10;
			gotoxy(enemyx,enemyy);
			cout << (char)enemy;
			gotoxy(70,2);
			cout << score;
			}


		}



		}

		gotoxy(47,2);
		cout << bullet << " ";

		if(bullet<1)

		break;



	}
	gotoxy(10,17);
	if(score>140)
	{
	cout<<name2<<" ";
	cout << "You have killed all enemies ";
        }
	else if(key!=27)
	{
	cout<<name2<<" ";
	cout << "You have losed the game ";
	}
}


void main()
{
	clrscr();

	 rectangle();

	drawTank(4);




	 /////////////////////////////
	//* code for battelfield.  //
	/////////////////////////////



	int x=3,y=2;
	gotoxy(x,y);
	cout<<"Name :";


	gotoxy(10,2);
	cout<<name2;


	gotoxy(x+30,y);
	cout<<"Bullet Left :";
	gotoxy(x+60,y);
	cout<<"Score :";
	cout<<endl<<"--------------------------------------------------------------------------------";
//
	 x=3;
	 y=4;
	 game();
	 int ch=2;
	 gotoxy(10,18);
	cout << "Press Enter ";
	while(ch!=13)

	ch=getch();
}






