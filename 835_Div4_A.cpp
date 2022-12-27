#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        vector<int> arr;
        int num;
        for(int i =0; i<3; i++)
        {
            cin>>num;
            arr.push_back(num);
        }
        sort(arr.begin(), arr.end());
        cout<<arr[1]<<endl;
    }
//    main();
    return 0;
}
