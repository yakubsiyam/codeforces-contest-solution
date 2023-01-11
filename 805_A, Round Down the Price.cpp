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
       int n, cnt = 0, a = 1;
       cin >> n;
       int s = n;

        while(n != 0)
        {
            n /= 10;
            cnt++;
        }

        a = pow(10, cnt - 1);
        cout << s - a << endl;
    }

    return 0;
}
