#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
    while(1)
    {
        n++;
        int a = n / 1000;
        int b = n / 100 % 10;
        int c = n / 10 % 10;
        int d = n % 10;

        if(a != b && a != c && a != d && b != c && b != d && c != d)
            return n;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}
