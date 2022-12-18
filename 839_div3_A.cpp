#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--)
    {
        int a, b;
        char s;
        cin >> a >> s >> b;
        if (s == '+')
        {
            cout << a + b << endl;
        }
    }
    return 0;
}
