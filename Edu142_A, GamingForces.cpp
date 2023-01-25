#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int n, a[105];
        cin >> n;

        int single = 0, extra = 0;
        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                single++;
            else
                extra++;
        }
        cout << extra + (single + 1) / 2 << endl;
    }
    return 0;
}
