#include<bits/stdc++.h>
using namespace std;

int countingBlock(string fTower, string sTower)
{
    reverse(sTower.begin(), sTower.end());
    fTower += sTower;

    int cnt = 0;
    for (int i = 1; i < fTower.size(); i++)
    {
        if (fTower[i] == fTower[i - 1])
            cnt++;
    }

    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin >> n >> m;
        string fTower, sTower;
        cin >> fTower >> sTower;

        cout << (countingBlock(fTower, sTower) <= 1 ? "YES\n" : "NO\n");

    }
    return 0;
}
