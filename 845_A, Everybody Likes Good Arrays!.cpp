#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e5+10;
int arr[MAX];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--)
    {
        int n;
        cin >> n;

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        int ans = 0;

        for(int i = 0; i < n- 1; i++)
            if(((arr[i] % 2 == 0) && (arr[i+1] % 2 == 0)) || ((arr[i] % 2 == 1) && (arr[i+1] % 2 == 1)))
                ans++;

        cout << ans << endl;
    }

    return 0;
}
