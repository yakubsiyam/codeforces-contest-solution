#include<bits/stdc++.h>
using namespace std;

bool solve(char s)
{
    string str = "codefrs";
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == s)
            return true;
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
        char s;
        cin >> s;

        solve(s) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}


