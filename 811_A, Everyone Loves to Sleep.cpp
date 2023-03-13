#include<bits/stdc++.h>
using namespace std;

int solve(int n, int a, int b)
{
    a = a * 60 + b;

    int cnt = 1440;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        x = x * 60 + y;
        x = x - a;
        if(x < 0)
            x = 1440 + x;
        if(cnt>x)
            cnt = x;
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--)
    {
        int n,a,b;
        cin >> n >> a >> b;

        int cnt = solve(n,a, b);
        cout << cnt / 60 << " " << cnt % 60 << endl;
    }
//    main();
    return 0;
}


