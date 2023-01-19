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
        string s[3005];

        map<string, int> word;

        for(int i = 0; i < n*3; i++)
        {
            cin >> s[i];
            word[s[i]]++;
        }

        int cnt[3] = {0};

        for(int i = 0; i < n*3; i++)
        {
            int temp_cnt = word[s[i]];
            int p = i/n;

            if(temp_cnt == 1)
                cnt[p] += 3;
            else if(temp_cnt == 2)
                cnt[p] += 1;
            else
                cnt[p] += 0;
        }

        for(int i = 0; i < 3; i++)
            cout << cnt[i] << " ";
        cout << endl;
    }

    return 0;
}
