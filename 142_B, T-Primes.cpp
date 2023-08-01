#include<bits/stdc++.h>
using namespace std;

bool is_prime(long long n)
{
    if(n < 2)
        return false;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--)
    {
        long long n;
        cin >> n;
        long long sqx = sqrtl(n);

        ((sqx * sqx == n) && is_prime(sqx)) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}

