#include<bits/stdc++.h>
using namespace std;

void solve(string s)
{
    string fili = "po", krn = "mnida";

    if(s.size() < 6)
    {
        if (s.find(fili) != string::npos)
            cout << "FILIPINO\n";
        else if(s.find(krn) != string::npos)
            cout << "KOREAN\n";
        else
            cout << "JAPANESE\n";
    }

    else
    {
        string r = s.substr(s.size() - 5, 6);
        if (r.find(fili) != string::npos)
            cout << "FILIPINO\n";
        else if(r.find(krn) != string::npos)
            cout << "KOREAN\n";
        else
            cout << "JAPANESE\n";
    }
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
        cin >> s;

        solve(s);
    }

    return 0;
}
