#include<bits/stdc++.h>
using namespace std;

long long find_trailing_zeroes(long long a, long long N)
{
    long long cnt = 0, p = 5, dw = 5;
    while(N >= dw)
    {
        cnt += N /dw;
        dw *= p;
    }
    return cnt;
}

int main()
{
    long long a, cnt = 0;
    vector<long long> s;
    cin >> a;

    for(long long i = a * 4; i <= ((a * 5) + 10); i++)
    {
        if(find_trailing_zeroes(a, i) == a)
            s.push_back(i);
    }
    if(s.size() == 0)
        cout << '0' << endl;
    else
    {
        cout << s.size() << endl;
        for(long long i = 0; i < s.size(); i++)
            cout << s[i] << " ";
    }
    return 0;
}
