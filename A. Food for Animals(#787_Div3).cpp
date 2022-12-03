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
        int a,b,c,x,y;
        cin>> a >> b >> c >> x >> y;
        ((x - min(a,x)) + (y - min(b,y)) <= c) ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}



