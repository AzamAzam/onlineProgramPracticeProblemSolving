//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//void main() {
//	int **matrix;
//	int  n;
//	cin >> n;
//	matrix = new  int *[n];
//	for (int i = 0; i < n; i++){
//		matrix[i] = new  int[n];
//	}
//	for (size_t i = 0; i < n; i++)
//	{
//		for (size_t j = 0; j < n; j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//	int sum1 = 0, sum2 = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		sum1 += matrix[i][i];
//		sum2 += matrix[i][n - i - 1];
//	}
//	cout << abs(sum1 - sum2);
//	system("pause");
//	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
//}
