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
        int n, h1, h2, h3;
        cin >> n;

        h2 = ceil(n / 3);
        h1 = h2 + 1;
        h3 = n - (h1 + h2);
        if(h3 == 0)
        {
            h2--;
            h3++;
        }
        cout << h2 << " " << h1 << " " << h3 << endl;
    }

    return 0;
}
