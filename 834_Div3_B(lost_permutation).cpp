#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t,sum,m,a;
    cin >> t;
    while(t--)
    {
        cin >> m >> sum;
        vector<int> elem;
        for(int i = 0; i < m; i++)
        {
            cin>>a;
            elem.push_back(a);
        }
        sort(elem.begin(), elem.end());
        int cnt = 1;
        for(int i = 0; i < elem.size(); i++)
        {
            if(elem[i] != cnt)
            {
                sum -= cnt;
                cnt++;
                i--;
            }
            else
                cnt++;
        }
        while(sum > 0)
        {
            sum-=cnt;
            cnt++;
        }
        if(sum == 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
//    main();
    return 0;
}

