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
        int n, sum = 0, cnt;
        string str;
        cin >> n >> str;
        sort(str.begin(), str.end());
        auto res = unique(str.begin(), str.end());
        string uniqueStr =  string(str.begin(), res);
        for(int i = 0; i < uniqueStr.size(); i++)
        {
            cnt = 0;
            for(int j = 0; j < n; j++)
            {
                if(uniqueStr[i] == str[j])
                {
                    cnt++;
                    (cnt == 1) ? sum+=2 : sum++;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}

