#include <bits/stdc++.h>
using namespace std;

int solve(multiset<int>& mset)
{
    int cnt = 0;
    while(!mset.empty())
    {
        int elem = *mset.begin();
        while(mset.count(elem))
        {
            mset.erase(mset.find(elem));
            elem++;
        }
        ++cnt;
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--)
    {
        int n, elem;
        cin >> n;
        multiset<int> mset;

        for (int i = 0; i < n; i++)
        {
            cin >> elem;
            mset.insert(elem);
        }

        cout << solve(mset) << endl;
    }
    return 0;
}
