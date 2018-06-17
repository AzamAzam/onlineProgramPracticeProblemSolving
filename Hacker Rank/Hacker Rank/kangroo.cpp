#include <iostream>
#include<string>
using namespace std;
/*
string kangaroo(int x1, int v1, int x2, int v2) {

	
	// Complete this function
	while (1){
		if (x1 == x2) return "YES";
		if (x1 < x2&&v1 < v2) return "NO";
		if (x1 > x2&&v1 > v2) return "NO";
		x1 += v1;
		x2 += v2;
	}

	 */
	string kangaroo(int x1, int v1, int x2, int v2) {
		// Complete this function
		if (x2 > x1 && v2 > v1)
			return "NO";
		while (x1 < x2)
		{
			x1 += v1;
			x2 += v2;
			if (x1 == x2)
				return "YES";
		}
		return "NO";
	//}

}

int main() {
	int x1;
	int v1;
	int x2;
	int v2;
	cin >> x1 >> v1 >> x2 >> v2;
	string result = kangaroo(x1, v1, x2, v2);
	cout << result << endl;
//	system("pause");
	return 0;
}
