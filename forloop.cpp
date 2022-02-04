#include <iostream>
using namespace std;
int main()
{

        cout << "Enter number" << endl;
    int n;
    cin >> n;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            cout << "not prime \n";
            break;
        }
    }

    if (i == n)
    {
        cout << "Prime no\n";
    }

    return 0;
}