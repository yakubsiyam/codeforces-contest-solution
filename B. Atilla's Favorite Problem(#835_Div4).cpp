#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        string s;
        cin>>n>>s;
        sort(s.begin(), s.end());
        cout<<s[n-1] - 96 <<endl;
    }
//    main();
    return 0;
}
