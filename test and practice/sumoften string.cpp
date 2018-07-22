#include <iostream>
#include <string >
using namespace std;
string sum="0";
string getinput()
{
    cout << "Enter number : ";
    cin >> sum;
    return sum;
}
int main()
{
    for (int i = 0; i < 10; i++){
        sum = to_string(stoi(sum) + stoi(getinput()));
        cout << "sum " << sum<<endl;
    }
}