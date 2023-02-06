#include<bits/stdc++.h>
using namespace std;

bool solve(string s)
{
    int xAxis = 0, yAxis = 0;
    for(int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if(c == 'U')
            yAxis++;
        else if(c == 'D')
            yAxis--;
        else if(c == 'R')
            xAxis++;
        else
            xAxis--;

        if(xAxis == 1 && yAxis == 1)
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
        string s;
        int n;
        cin >> n >> s;

        solve(s) ? cout << "Yes\n" : cout << "No\n";
    }

    return 0;
}
