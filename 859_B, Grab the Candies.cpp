#include<bits/stdc++.h>
using namespace std;

const int MAX = 100;
int arr[MAX + 5];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--)
    {
        int n, mihai = 0, bianca = 0;
        cin >> n;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            (arr[i] % 2 == 0) ? mihai += arr[i] : bianca += arr[i];
        }

        cout << ((mihai > bianca) ? "Yes" : "No") << endl;

    }

    return 0;
}
