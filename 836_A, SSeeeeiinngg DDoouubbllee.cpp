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
        string str, newStr;
        cin >> str;
        newStr = str;
        reverse(newStr.begin(), newStr.end());
        cout<<str + newStr<<endl;
    }
}


