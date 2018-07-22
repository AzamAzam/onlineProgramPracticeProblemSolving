		#include<stdio.h> 
		#include<conio.h> 
		#include<time.h> 
		#include<windows.h> 
		#include<stdlib.h> 
		#include<time.h> 
		struct node 
		{ 
		char data; 
		node *next; 
		}
		*first,*l,*temp; 
		void newNode(char data) 
		{ 
		if(first==NULL) 
		{ 
		first=new node(); 
		first->data=data; 
		first->next=NULL; 
		l=first; 
		} 
		else 
		{ 
		while(l->next!=NULL) 
		l=l->next; 
		temp=new node(); 
		temp->data=data; 
		temp->next=NULL; 
		l->next=temp; 
		l=temp; 
		} 
		} 
		void printAllNodes() 
		{ 
		l=first; 
		while(l->next!=NULL) 
		{ 
		printf("%c ",l->data); 
		l=l->next; 
		} 
		} 
		time_t now11, later11; 
		void sleep(int delay) 
		{ 
		now11=time(NULL); 
		later11=now11+delay; 
		while(now11<=later11)now11=time(NULL); 
		} 
		void gotoxy(short x, short y)
		 { 
		COORD pos = {x, y}; 
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); 
		} 
		int RandomAlphabets() 
		{ 
		int number=rand()%2+1; 
		switch(number) 
		{ 
		case 1: 
		number=rand()% 26+65 ; 
		return number; 
		break; 
		case 2: 
		number=rand()%26+97; 
		return number; 
		break; 
		} 
		} 
		int main()
		{ 
		srand(time(NULL) ); 
		char character[19]; 
		int Aplhabets=0; 
		int x[19],y[19]; 
		int gameCounter=0; 
		int number; 
		int i; 
		int misses=0; 
		do{ 
		system("cls"); 
		y[gameCounter]=0; 
		x[gameCounter]=rand()%79; 
		number =RandomAlphabets() ; 
		character[gameCounter]=number; 
		for(i=0;i<strlen(character)-1;i++)
		{ 
		gotoxy(x[i],y[i]); 
		printf("%c",character[i]); 
		y[i]=y[i]+1; 
		} 
		if(kbhit()) 
		{ 
		char ch=getch(); 
		for(i=0;i<strlen(character)-1;i++) 
		{ 
		if(ch==character[i])
		{ 
		character[i]=' '; 
		Aplhabets++; 
		} 
		} 
		} 
		gotoxy(1,18);
		printf("---------------------------------------------------------------------------------------------------");
		gotoxy(1,22); 
		printf("misses: %d/20",misses); 
		if(misses>0)
		{ 
		gotoxy(1,23); 
		printAllNodes(); 
		} 
		for(int i=0;i<19;i++) 
		{ 
		if(character[i]!=' '&&y[i]==18) 
		{ 
		misses++; 
		newNode(character[i]); 
		} 
		} 
		sleep(0); 
		gameCounter++; 
		if(gameCounter==19) 
		{ 
		gameCounter=0; 
		} 
		}
		while(misses<20); 
		system("cls"); 
		printf("Number of Collected Alphabetss: %d",Aplhabets); 
		printf("\nNumber of missed Alphabets:%d",misses); 
		printf("\nScore: %d\n",Aplhabets*30); 
		system("pause"); 
		}

