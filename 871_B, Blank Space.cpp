#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int arr[MAX + 5];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int n, cnt = 0, maxCnt = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                cnt++;
                if (maxCnt < cnt)
                    maxCnt = cnt;
            }
            else
            {
                cnt = 0;
            }
        }
        cout << maxCnt << endl;
    }
}
