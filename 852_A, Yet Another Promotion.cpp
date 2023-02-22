#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(ll a, ll b, ll n, ll m)
{
    ll ans = min(n * a, n * b);

    ll rm = (n / (m + 1));
    rm *= (m * a);
    ll rr = (n % (m + 1));
    rm += (min(a, b) * rr);

    return min(ans, rm);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--)
    {
        ll a, b, n, m;
        cin >> a >> b >> n >> m;

        cout << solve(a, b, n, m) << endl;
    }

    return 0;
}
