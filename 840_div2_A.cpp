#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--)
    {
        int n, a[520];
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int mx = a[0];
        int mn = a[0];

        for (int i = 1; i < n; i++)
        {
            mx = mx | a[i];
            mn = mn & a[i];
        }
        cout << mx - mn<< endl;
    }
    return 0;
}

