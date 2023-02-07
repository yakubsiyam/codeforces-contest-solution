#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{
    cout << n<< endl;
    for(int i = 1; i <= n; i++)
        cout << i << " ";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--)
    {
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}

