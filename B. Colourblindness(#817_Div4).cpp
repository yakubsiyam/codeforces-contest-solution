#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin>>T;
    while(T--)
    {
        int n;
        string str, str1;
        cin >> n >> str >> str1;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == 'G')
            {
                str[i] = 'B';
            }

            if(str1[i] == 'G')
            {
                str1[i] = 'B';
            }
        }

        if(str == str1)
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }
    return 0;
}

