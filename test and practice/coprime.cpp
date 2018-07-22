////input  a  number for  which  you  want  to see  relativley coprimes   
//#include <iostream>
//using  namespace  std;
//int  gcd(int  a, int b){
//	int temp;
//	while (b > 1){
//		temp = a%b;
//		if (temp == 0)
//			return b;
//		a = b;
//		b = temp;
//	}
//	return  b;
//}
//int  main(){
//	int  x, y, g;
//	cin >> x;
//	y = x - 1;
//	int count = 0;
//	cout << "relatively to " << x << endl << "coprimes list : ";
//	while (y > 1){
//		g = gcd(x, y);
//		if (g == 1){
//			count++;
//			cout << y << " ";
//		}
//		y--;
//	}
//	cout << endl << "Less than " << x << " total coprimes = " << count << endl;
//}