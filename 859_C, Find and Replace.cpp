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
        int n;
        string s;
        cin >> n >> s;
        int cntA = 0, cntB = 0;
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
                cntA |= 1 << (s[i]-'a');
            else
                cntB |= 1 << (s[i]-'a');
        }
        cout << (cntA & cntB ? "NO" : "YES") << '\n';
    }
    return 0;
}
