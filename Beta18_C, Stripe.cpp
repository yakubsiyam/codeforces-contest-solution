#include<bits/stdc++.h>
using namespace std;

const int MAX = 100000;
int arr[MAX + 5];

void solve(int n)
{
    int sumOne = 0, sumTwo = 0, cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sumOne += arr[i];
    }

    for (int i = 0; i < n-1; ++i)
    {
        sumOne -= arr[i];
        sumTwo += arr[i];
        if (sumOne == sumTwo)
            cnt++;
    }
    cout << cnt << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    solve(n);

    return 0;
}
