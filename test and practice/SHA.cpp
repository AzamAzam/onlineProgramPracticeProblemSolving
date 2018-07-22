#include <iostream>
#include <conio.h>

using namespace std;
class BankAccount
{
	// Declaration of Data Members
	int NumberOfTransction = 0;
	unsigned int  AccID;
	char AccTitle[50];
	char AccType;
	float balance;
	float transaction[20];
public:
	// Declaration of Member Functios
	void setID(int x) 
	{
		AccID = x;
	}
	void setTitle(char*p)
	{
		int i;
		for (i = 0; *p != NULL; i++, p++)
		{
			AccTitle[i] = *p;
		}
		AccTitle[i] = NULL;
	}
	void showTitle(){
		cout << AccTitle;
	}
	void deposite(float f){
		balance = balance + f; // Adding New Balance in Current Balance
		storeTransaction();
		transaction[NumberOfTransction++] = f; // Storing Transaction in Array
		cout << "Deposite succeeded ";
	
	}


	void withDraw(float f)
	{
		if (balance < f)
			cout << "You cant withdraw this Amount :";
		else{
			balance = balance - f;  // Subtracting New Balance From Current Balance
			storeTransaction();
			transaction[NumberOfTransction++] = -f;		// Storing Transaction in Array with -ve sign	
			cout << "With Draw succeeded  ";
		}
	}

	float getCurrentBalance()
	{
		return balance;
	}
	void storeTransaction()
	{
		if (NumberOfTransction == 20)
		{
			for (int j = 0; j < 20; j++){
				transaction[j] = transaction[j + 1]; // Swapping if Transactions > 20
			}
			NumberOfTransction--;
		}
	}
	void showTransaction(){
		cout << "Total number of transactions: " << NumberOfTransction << endl;
		for (int j = 0; j < NumberOfTransction; j++){
			if (transaction[j] >0){
				cout << j+1 << " is a Deposit Transaction of Amount : " << transaction[j]<<endl;
			}
			else if (transaction[j] < 0){
				cout << j + 1 << " is a With Draw transacton of Amount : " << -1 * transaction[j] << endl;
			}
			else
				cout << j + 1 << " is a empty transaction " << endl;
		}
	}
	BankAccount()
	{
		balance = 0;
	}
	
	BankAccount(float  balance){
		this->balance = balance;

	}



};


int main()
{
	char name [100] ;
	int n,id;
	float amount;
	BankAccount acc1;
	cout << "Enter Account Id : ";
	cin >> id;
	acc1.setID(id);
	cout << "Enter Account Title ";
	cin.getline (name,100);
	acc1.setTitle(name );
	cout << "ACCOUNT TITLE : ";
	acc1.showTitle(); 
	do 
	{
		
		cout << "\n \n  ";
		cout << "what do you want \n( Choose fromm the menu )\n1 for deposite \n2 for with Draw\n3 for check Current Balance\n4 for show last 20 transanctions \n5 for exit \n choose a number : ";

		cin >> n;
		
		switch (n)
		{
		case 1:
			cout << "Enter Amount you want to deposite : ";
			cin >> amount;
			acc1.deposite(amount);
			
			break;
		case 2:
			cout << "Enter Amount you want to with Draw : ";
			cin >> amount;
			acc1.withDraw(amount);
			
			break;
		case 3:
			amount = acc1.getCurrentBalance();
			cout << "Current Balance is : " << amount<<endl;
			break;
		case 4:
			acc1.showTransaction();
		case 5:
			break;
		default:
			cout << "You enterd a wrong choice \n choose a Nubmer from 1, 2, 3 or 4 and 5 for exit :";
			break;
		}
		cout << endl;
		_getch();
	} while (n != 5);



}
