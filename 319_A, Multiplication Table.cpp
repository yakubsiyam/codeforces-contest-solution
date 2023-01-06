#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x, i, cnt = 0;
    cin >> n >> x;

    if(n > x)
        n = x;

    for(int i = 1; i <= n; i++)
    {
        if( (x % i == 0) && ((x / i) <= n) )
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}
