#include<bits/stdc++.h>
using namespace std;


void solve(int n, string s)
{
    int val = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '0') cout << "+";
        else if (val == 0)
        {
            cout << "-";
            val = 1;
        }
        else
        {
            cout << "+";
            val = 0;
        }
    }
    cout << endl;
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

        solve(n, s);
    }
    return 0;
}








