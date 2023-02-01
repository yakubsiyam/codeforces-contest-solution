#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if(n < 3)
    {
        cout << -1 << endl;
        return 0;
    }

    for(int i = 0; i < n; i++)
        cout << n - i << " ";

    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    solve(n);

    return 0;
}
