// Problem Setter - Mazharul Islam Rifat
// Solution - Rahat Khan Pathan
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if ((r - l + 1) % 2 == 0 && (s[l] != ')') && (s[r] != '('))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}