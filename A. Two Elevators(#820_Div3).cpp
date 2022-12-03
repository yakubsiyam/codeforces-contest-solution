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
        int a,b,c;
        cin >> a >> b >> c;
        int x = abs(b - c) + c;
        if(a < x)
        {
            cout << "1\n";
        }
        else if(a > x)
        {
            cout << "2\n";
        }
        else
        {
            cout << "3\n";
        }
    }
    return 0;
}
