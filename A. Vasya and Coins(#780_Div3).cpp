#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin>>T;
    while(T--)
    {
        int a,b;
        cin >> a >> b;
        int ans = a+b*2+1;
        if(a == 0)
            ans = 1;
        cout << ans << endl;
    }
//    main();
    return 0;
}




