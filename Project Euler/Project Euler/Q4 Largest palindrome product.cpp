//#include <iostream >
//using namespace std;
//bool palindrome(int);
//int main()
//{
//	int product, largest=1;
//	int i, j;
//	bool flag=false ;
//	for (i = 100; i < 1000; i++)
//	{
//		for (j = 100; j < 1000; j++)
//		{
//			product = i*j;
//			flag = palindrome(product);
//			if (flag && largest < product)
//				largest = product;			
//		}
//		
//	}
//	cout <<"The largest palindrome made from the product of two 3-digit numbers = "<< largest << endl;
//}
//bool palindrome(int n)
//{
//	int rev=0, numb=n;
//	while (numb>0)	
//	{
//		rev = rev * 10 + numb % 10;
//		numb /= 10;
//	}
//	if (n == rev)
//		return true;
//	else
//		return false;
//}