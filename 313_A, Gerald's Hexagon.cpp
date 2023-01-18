#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a1, a2, a3, a4, a5, a6;
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;

    int total = a1 + a2 + a6;
    cout << total * total - a2 * a2- a4 * a4 - a6 * a6 << endl;

    return 0;
}
