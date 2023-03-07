#include<bits/stdc++.h>
using namespace std;
const int MAX = 1000000;
int arr[MAX + 5];

int solve(int arr[], int n)
{
    int ans = INT_MAX;
    for(int i = 0; i < n-1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int temp = __gcd(arr[i], arr[j]);
                ans = min(temp, ans);
            }
        }
    return ans;
}

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

        for(int i=0; i<n; i++)
            cin >> arr[i];

        (solve(arr, n) <= 2) ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}
