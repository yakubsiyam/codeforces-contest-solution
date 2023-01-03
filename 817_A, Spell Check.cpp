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
        string str;
        cin >> n >> str;
        sort(str.begin() , str.end());
        if(str == "Timru")
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}
