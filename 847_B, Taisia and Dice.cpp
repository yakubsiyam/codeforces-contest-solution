#include<bits/stdc++.h>
using namespace std;

const int MAX = 100000;
int result[MAX + 5];

void solve(int n, int s, int r)
{
    int rem = s - r;
    int x = r / (n-1);
    int y = r % (n-1);

    for(int i = 0; i < n - 1; i++)
        result[i] = x;

    if(r != 0)
    {
        for(int i = 0; i < n-1 && r != 0; i++)
        {
            if(result[i] + y <= rem)
            {
                result[i] += y;
                break;
            }
            else
            {
                int z = rem - result[i];
                result[i] += z;
                y -= z;
            }
        }
    }

    for(int i = 0; i < n - 1; i++)
    {
        printf("%d ", result[i]);
    }

    printf("%d\n", rem);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int n, s, r;
        cin >> n >> s >> r;
        solve(n, s, r);
    }

    return 0;
}
