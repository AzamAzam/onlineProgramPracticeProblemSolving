#include <iostream>
using namespace std;
int main()
{
double i;
int n;
for (i = 0.00; ((i - int(i))*100) <= 9; i += float(0.01))
{
cin >> n;
i += n;
}
cout << "sum: " << int(i);
}
