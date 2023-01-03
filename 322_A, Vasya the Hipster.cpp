#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b;
    cin >> a >> b;
    cout << min(a,b) << " " << (max(a,b) - min(a,b)) / 2 << endl;
    return 0;
}
