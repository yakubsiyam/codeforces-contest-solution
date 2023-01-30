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
        int n, ans = 0;
        cin >> n;
        while(n / 10 != 0)
        {
            ans += 9;
            n /= 10;
        }
        cout << n+ans << endl;
    }
//    main();
    return 0;
}
