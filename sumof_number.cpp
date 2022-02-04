#include <iostream>
using namespace std;
int main()
{

    int num;

    cout << "Enter number\n";
    cin >> num;
    int sum = 0;

    for (int i = 1; i <= num; i++)
    {
        cout << i << ", ";
        sum = sum + i;
    }
    cout << "sum = " << sum;
    return 0;
}