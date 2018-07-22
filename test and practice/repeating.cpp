//#include <iostream>
//using namespace std;
//
//int  mod(int A[], int  size){
//	if (size <= 0)	 return -1;
//	int  index = 0;
//	int count = 0;
//	for (size_t i = 0; i <size; i++)
//	{
//	int 	tempcount = 0;
//		for (size_t j	 = 0; j < size; j++)
//		{
//			if (A[i] == A[j])
//				tempcount++;
//		}
//		if (tempcount>count)
//		{
//			count = tempcount;
//			index = i;
//		}
//	}
//	return A[index];
//}
//int  main() {
//	int  a[10] = { 1, 5, 4, 2, 4, 8, 7, 1, 2, 4 };
//	cout << mod(a, 10)<<endl;
//}