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
        int  s[2][2];
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cin>>s[i][j];
            }
        }

        int row = (s[0][0] - s[0][1]) * (s[1][0] - s[1][1]);
        int col = (s[0][0] - s[1][0]) * (s[0][1] - s[1][1]);
        if(row == abs(row) && col == abs(col))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}

