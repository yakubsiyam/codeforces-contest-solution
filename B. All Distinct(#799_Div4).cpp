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
        vector<int> arr(n);
        for(auto &v : arr)
        {
            cin >> v;
        }

        sort(arr.begin(), arr.end());

        for(int i = 1; i < n; i++)
        {
            if(arr[i] == arr[i-1])
                cnt++;
        }
        int elemCnt = n - cnt;
        if(cnt % 2 == 1)
            elemCnt--;
        cout << elemCnt << endl;
    }
    return 0;
}
