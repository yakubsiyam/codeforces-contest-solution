#include<bits/stdc++.h>
using namespace std;


long long get_power(long long n)
{
    if(n == 0)
        return 1;
    if(n % 2 == 0)
    {
        auto res = get_power(n / 2);
        return (res * res);
    }
    return (2 * get_power(n - 1));
}

int main()
{
    int n, m;
    cin >> n >> m;

    long long a = get_power(n);

    if(a == 0)
        cout << m << endl;
    else
        cout << m % a << endl;

    return 0;
}
