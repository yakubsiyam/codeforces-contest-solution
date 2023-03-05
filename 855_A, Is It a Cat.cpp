#include<bits/stdc++.h>
using namespace std;

void is_meowing(string& str)
{
    transform(str.begin(), str.end(), str.begin(), [] (char c)
    {
        return tolower(c);
    });

    str.erase(unique(str.begin(), str.end()), str.end());
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
        string str;
        cin >> n >> str;

        cout << ((is_meowing(str) == "meow") ? "YES" : "NO") << endl;
    }
    return 0;
}
