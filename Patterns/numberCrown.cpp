/*

Input Format: N = 3
Result:
1    1
12  21
123321

*/

#include <bits/stdc++.h>
using namespace std;

void numberCrown(int n)
{

    int space = 2 * n - 2;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {

            cout << j << " ";
        }

        cout << endl;
        space -= 2;
    }
}


int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    numberCrown(n);

    return 0;
}