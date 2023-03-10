#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, x = 0, y = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a;
        (a < 0) ? y++: x++;
    }

    for(int i = 1; i <= x; i++)
        cout << i <<" ";

    for(int j = 1; j <= y; j++)
        cout << x - j <<" ";

    cout <<"\n";

    for(int i = 1; i <= min(x, y); i++)
        cout << "1 0 ";

    for(int i = y; i < x; i++)
        cout << i - y + 1 <<" ";

    cout <<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--)
    {
        solve();
    }
    return 0;
}
