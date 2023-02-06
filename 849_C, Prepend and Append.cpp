#include<bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solve(string s)
{
    int l = 0, r = s.size() - 1, ans = s.size();
    while (s[l] != s[r] && ans > 0)
    {
        l++;
        r--;
        ans -= 2;
    }
    cout << ans << '\n';
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

        solve(s);
    }

    return 0;
}
