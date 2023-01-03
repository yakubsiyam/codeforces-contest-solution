#include <bits/stdc++.h>
using namespace std;

vector<int> primes;

bool disPrime(int n)
{
    int primeDivisors = 0, i = 0, cnt = 0;

    while(n > 1)
    {
        if(n % primes[i] == 0)
        {
            cnt++;
            while(n % primes[i] == 0)
            {
                n /= primes[i];
            }
        }
        i++;
    }
    if(cnt == 2) return true;
    return false;
}

bool primeChecker(int n)
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

void primeGen()
{
    for(int i = 0; i < 3100; i++)
        if(primeChecker(i))
            primes.push_back(i);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    primeGen();
    int n, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(disPrime(i))
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}
