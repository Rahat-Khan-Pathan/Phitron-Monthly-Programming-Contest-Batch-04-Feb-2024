// Problem Setter - Mazharul Islam Rifat
// Solution - Rahat Khan Pathan
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<int>> pqEven;
    priority_queue<int, vector<int>, greater<int>> pqOdd;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
                pqEven.push(x);
            else
                pqOdd.push(x);
        }
        else if (t == 2)
        {
            if (!pqEven.empty())
            {
                cout << pqEven.top() << endl;
                pqEven.pop();
            }
            else
            {
                cout << "empty" << endl;
            }
        }
        else
        {
            if (!pqOdd.empty())
            {
                cout << pqOdd.top() << endl;
                pqOdd.pop();
            }
            else
            {
                cout << "empty" << endl;
            }
        }
    }
    return 0;
}