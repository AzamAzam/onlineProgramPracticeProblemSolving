
#include <iostream>

using namespace std;
int  main(){
	int N, M, K;
	cin >> N;
	while (N--){
		cin >> M;
		int *a = new int[M];
		int *b = new int[M];
		for (size_t i = 0; i < M; i++)
		{
			b[i] = 0;
		}

		cin >> K;
		for (size_t i = 0; i < M; i++)
		{
			cin >> a[i];
		}
		int  sum = 0;
		for (size_t j = 0; j < K; j++)
		{



			int  max = -1;
			int index1 = 0, index2 = 0;

			for (int i = 0; i < M - 1; i++)
			{
				if (max < a[i] + a[i + 1] && !(b[i] == 1||b[i+1]==1)   &&!(b[i]==2&&b[i+1]==2)){
					max = a[i] + a[i + 1];
					index1 = i;
					index2 = i + 1;
				}
			}
			bool  flag = false;
			if (a[index1] < a[index2] && b[index2]!=2 ){
				index1 = index2;
				sum += a[index1];
				flag = true;
				cout << a[index1] << " " << index1 << endl;
			}
			else  if (b[index1] != 2){
				sum += a[index1];
				flag = true;
				cout << a[index1] << " " << index1 << endl;
			}
			else  {
				sum += a[index2];
				flag = true;
				cout << a[index2] <<" "<< index2 << endl;
			}

			if (index1 == 0&&flag){
				b[index1] = 1;
				b[index1 + 1] = 2;
			}
			else  if (index1 == M - 1 &&flag){
				b[index1] = 1;
				b[index1 - 1] = 2;
			}
			else if (flag ){
				b[index1] = 1;
				b[index1 - 1] = 2;
				b[index1 + 1] = 2;
			}
			cout << endl;
		//	sum += a[index1];
		}
		cout << sum;
	}
	system("pause");
	return  0;
}
