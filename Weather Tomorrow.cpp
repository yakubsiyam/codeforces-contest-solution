#include<bits/stdc++.h>
using namespace std;

const int MAX = 100;
int arr[MAX + 5];

int solve(int *arr, int n)
{
    int diff = arr[1] - arr[0];
    bool flag = true;
    for(int i = 1; i < n; i++)
    {
        if((arr[i] - arr[i-1]) != diff)
            flag = false;
    }
    if(flag)
        return arr[n - 1] + diff;
    else
        return arr[n-1];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << solve(arr, n) << endl;

    return 0;
}

//Problem URL
//https://codeforces.com/contest/847/problem/M
