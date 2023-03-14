#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    bool flag = true;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if((i+2) < s.size()){
            if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
                i += 2;
                if(!flag){
                    cout<< " ";
                    flag=true;
                }
            }
            else
            {
                cout<< s[i];
                flag = false;
            }
        }
        else{
            cout<<s[i];
        }
    }
    return 0;
}
