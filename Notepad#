#include<bits/stdc++.h>
using namespace std;

bool solve(int n, string s)
{
    bool flag = false;

    if(n > 3)
    {
        while(s.size() > 1)
        {
            string temp = s.substr(0, s.size() - 2);
            string sub = s.substr(s.size() - 2, 2);
            if(temp.find(sub) < temp.size())
                return true;
            s.pop_back();
        }
    }
    return false;
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

        solve(n, s) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
