#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int cnt = 0;
        string str, code = "codeforces";
        cin >> str;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] != code[i])
                cnt++;
        }

        cout << cnt << endl;
    }
}
