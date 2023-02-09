#include<bits/stdc++.h>
using namespace std;

vector<long long> a;

int findDivisor(long long n)
{
    for(long long i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            a.push_back(i);
            if(i * i != n)
                a.push_back(n / i);
        }
    }

    sort(a.begin(), a.end());
    return a.size();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, k;
    cin >> n >> k;

    (k > 100000) ? cout << "-1\n" :
        (findDivisor(n) < k) ? cout << "-1\n" : cout << a[k - 1] << endl;
    return 0;
}


