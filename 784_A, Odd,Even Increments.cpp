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
        int n, a[1005];
        bool flag = true;
        cin >> n;

        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < 2; i++)
        {
            for(int j = i; j < n; j += 2)
            {
                if(a[j] % 2 != a[i] % 2)
                    flag = false;
            }
        }

        flag ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}


