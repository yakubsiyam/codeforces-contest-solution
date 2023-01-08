#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
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

    int n, k;
    cin >> n >> k;
    vector<int> primes;

    for(int i = 0; i <= n; i++)
    {
        if(isPrime(i))
            primes.push_back(i);
    }

    for(int i = 0; i < primes.size(); i++)
    {
        if(k == 0)
            break;

        int temp = primes[i] + primes[i + 1] + 1;
        if(find(primes.begin(), primes.end(), temp) != primes.end())
            k--;
    }

    (k == 0) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}
