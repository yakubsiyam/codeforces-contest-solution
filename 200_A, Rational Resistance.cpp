#include<bits/stdc++.h>
using namespace std;

long long getResistanceCnt(long long a, long long b)
{
    if (a == 0) return 0;
    if (a < b) swap(a, b);
    return (a / b) + getResistanceCnt(a % b, b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long a, b;
    cin >> a >> b;

    cout << getResistanceCnt(a, b) << endl;
    return 0;
}
