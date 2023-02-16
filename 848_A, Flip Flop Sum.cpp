#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5;
int a[MAX + 5];

int solve(int *a, int n)
{
    int sum = 0, mn = 2;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (i > 0)
        {
            mn = min(mn, a[i] + a[i - 1]);
        }
    }
    return sum - 2 * mn;
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


        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << solve(a, n) << endl;
    }
    return 0;
}

