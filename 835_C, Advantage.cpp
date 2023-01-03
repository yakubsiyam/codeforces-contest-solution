#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,v,maxNum,curNum,secMax;
        cin>>n;
        vector<int> s;
        vector<int> newS;
        vector<int> maxN;
        for(int i=0; i<n; i++)
        {
            cin>>v;
            s.push_back(v);
            maxN.push_back(v);
        }
        sort(maxN.begin(), maxN.end());
        maxNum = maxN[n-1];
        secMax = maxN[n-2];
        for(int i=0; i<n; i++)
        {
            if(maxNum == s[i])
            {
                curNum = s[i] - secMax;
            }

            else
            {
                curNum = s[i] - maxNum;
            }
            newS.push_back(curNum);
            cout<<curNum<<" ";
        }
        cout<<endl;
    }
//    main();
    return 0;
}
