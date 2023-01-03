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
        long long n, a[55], mul = 1;
        cin >> n;

        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < n; i++)
            mul *= a[i];

        cout << (mul + n - 1) * 2022 << endl;
    }
    return 0;
}
