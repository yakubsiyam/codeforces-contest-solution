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
        long long n;
        cin >> n;

        long long a[n];
        for(long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        long long minNum = a[0], maxNum = a[n-1], mnCnt = 0, mxCnt = 0;
        for(long long i = 0; i < n; i++)
        {
            if(minNum == a[i])
                mnCnt++;
            if(maxNum == a[i])
                mxCnt++;
        }

        cout << ( minNum == maxNum ? n * (n - 1) : 2 * mnCnt * mxCnt ) << endl;
    }
    return 0;
}
