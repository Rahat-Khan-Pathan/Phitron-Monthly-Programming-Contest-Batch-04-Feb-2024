// Problem Setter - Rahat Khan Pathan
// Solution - Rahat Khan Pathan
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll pre[n], suf[n];
        pre[0] = a[0];
        suf[n - 1] = a[n - 1];
        for (ll i = 1; i < n; i++)
            pre[i] = pre[i - 1] + a[i];
        for (ll i = n - 2; i >= 0; i--)
            suf[i] = suf[i + 1] + a[i];
        ll ans = 0;
        for (ll i = 1; i < n - 1; i++)
        {
            if (pre[i - 1] == suf[i + 1])
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}