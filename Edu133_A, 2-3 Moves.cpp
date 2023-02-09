#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if(n == 1) return 2;
    return (n + 2) / 3;
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

        cout << solve(n) << endl;
    }

    return 0;
}
