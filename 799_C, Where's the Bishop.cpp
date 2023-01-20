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
        int n, x, y;
        string a[8];
        for(int i = 0; i < 8; i++)
            cin >> a[i];

        bool flag = true;
        for(int i = 0; i < 8; i++)
        {
            int c = 0;
            for(int j = 0; j < 8; j++)
            {
                if(a[i][j]==35)
                {
                    x = i;
                    y = j;
                    c++;
                }
            }
            if(c == 2)
                flag = false;

            if(flag == false && c == 1)
                break;
        }
        cout << x + 1 <<" " << y + 1 <<endl;
    }
    return 0;
}
