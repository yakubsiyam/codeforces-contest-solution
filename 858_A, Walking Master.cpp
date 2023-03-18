#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
	
    if (d < b) 
    {
      cout << "-1\n";
      return;
    }
 
    int req = (d - b);
    a += req;
 
    if (c > a) 
    {
      cout << "-1\n";
      return;
    }
 
    req += (a - c);
    cout << req << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--)
    {
        solve();
    }
    return 0;
}
