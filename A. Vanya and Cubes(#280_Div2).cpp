#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, cnt = 0, sum = 0, totalSum = 0;
    cin >> n;
    for(int i=1; i <= n; i++)
    {
        sum +=i;
        totalSum += sum;
        if(totalSum > n)
        {
            break;
        }
        cnt++;
    }
    cout<< cnt <<endl;
    return 0;
}
