// Problem Setter - Sakib Ahamed Khan
// Solution - Rahat Khan Pathan
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || i + j == n + 1)
                cout << "*";
            else if (j < i)
                cout << 0;
            else
                cout << 7;
        }
        cout << endl;
    }
    return 0;
}