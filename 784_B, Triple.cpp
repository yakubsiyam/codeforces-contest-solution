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
        int ans = -1, n, a;
        cin>>n;
        map<int,int> num;
        while(n--)
        {
            cin >> a;
            num[a]++;
            if(num[a] >= 3)
                ans = a;
        }
        cout << ans << endl;
    }
    return 0;
}
