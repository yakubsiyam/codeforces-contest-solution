#include<bits/stdc++.h>
using namespace std;
int c[1000000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, i, cnt = 1;
    cin >> n;

    int a[n], b[n];
    for(i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        a[i] = (a[i] * 60) + b[i];
        c[a[i]]++;

        if(c[a[i]] > cnt)
            cnt++;
    }
    cout << cnt << endl;
}
