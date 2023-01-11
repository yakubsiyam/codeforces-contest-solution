#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        string s;
        char c;
        cin >> s >> c;

        bool flag = false;
        for(int i = 0; i < s.size(); i += 2)
        {
            if(s[i] == c)
            {
                flag = true;
                break;
            }
        }
        flag ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
