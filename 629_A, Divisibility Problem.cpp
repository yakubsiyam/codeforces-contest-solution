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
        int a, b;
        cin >> a >> b;
        (a % b == 0) ? cout << "0" << endl : cout << b - (a % b) << endl;
    }
    return 0;
}

