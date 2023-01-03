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
        int n;
        cin >> n;
        (n % 2 == 1) ? cout << (n / 2) + 1 << endl : cout << n / 2 << endl;
    }
//    main();
    return 0;
}
