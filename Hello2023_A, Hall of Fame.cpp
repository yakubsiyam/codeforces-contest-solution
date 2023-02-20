#include<bits/stdc++.h>
using namespace std;

void solve(int n, string s)
{
    int idx = -1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1])
        {
            if (s[i] == 'L')
                idx = 0;
            else
                idx = i;

            break;
        }
    }
    cout << idx << endl;
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
        string s;
        cin >> n >> s;
        int cnt = count(s.begin(), s.end(), 'L');
        if (cnt == 0 || cnt == n)
        {
            cout << "-1" << endl;
            continue;
        }

        solve(n, s);
    }
//    main();
    return 0;
}
