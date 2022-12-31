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
        string a,b;
        cin >> a >> b;
        int n=a.size(),m=b.size();
        if(a == b)
        {
            cout << "=" << endl;
            continue;
        };
        if(a[n-1] == 'L')
        {
            if(b[m-1] == 'L')
            {
                if(n > m)
                {
                    cout << ">" << endl;
                    continue;
                }
                {
                    cout << "<" << endl;
                    continue;
                }
            }
            if(b[m-1] == 'S')
            {
                cout << ">" << endl;
                continue;
            }
            {
                cout << ">" << endl;
                continue;
            }
        }
        else if(a[n-1] == 'S')
        {
            if(b[m-1] == 'S')
            {
                if(n > m)
                {
                    cout << "<" << endl;
                    continue;
                }
                {
                    cout << ">" << endl;
                    continue;
                }
            }
            if(b[m-1] == 'L')
            {
                cout << "<" << endl;
                continue;
            }
            {
                cout << "<" << endl;
                continue;
            }
        }
        else
        {
            if(b[m-1] == 'L')
            {
                cout << "<" << endl;
                continue;
            }
            if(b[m-1] == 'S')
            {
                cout << ">" << endl;
                continue;
            }
        }

    }
    return 0;
}
