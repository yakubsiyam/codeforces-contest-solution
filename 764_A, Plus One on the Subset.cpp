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
        int n, v, cnt = 0;
        cin >> n;
        vector<int> a;
        for(int i = 0; i < n; i++)
        {
            cin >> v;
            a.push_back(v);
        }
        sort(a.begin(), a.end());
        int maxNum = a[n - 1], minNum = a[0];
        cout << maxNum - minNum << endl;
    }
    return 0;
}


