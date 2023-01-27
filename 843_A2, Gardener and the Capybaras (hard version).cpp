#include<bits/stdc++.h>
using namespace std;

void subString(string str)
{
    if (str[1] == 'b')
        cout << str[0] << ' ' << str.substr(1, str.size() - 2) << ' ' << str[str.size() - 1] << endl;
    else
        cout << str[0] << ' ' << str[1] << ' ' << str.substr(2) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--)
    {
        string str;
        cin >> str;

        subString(str);
    }
    return 0;
}
