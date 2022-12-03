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
        int n,v;
        string str;
        cin >> n;
        vector<int> elem(n);
        for(auto &v : elem)
        {
            cin >> v;
        }
        cin >> str;
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if((elem[i] == elem[j]) && (str[i] != str[j]))
                {
                    cnt = 1;
                }
            }
        }
        (cnt == 0) ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}
