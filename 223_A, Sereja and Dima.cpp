#include<bits/stdc++.h>
using namespace std;

const int MAX = 1000;
int arr[MAX + 5];

void gameCalculation(int n, int k, int arr[])
{
    int  serejaSum = 0, dimaSum = 0, j = 0;
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            if(arr[j] > arr[k]) serejaSum += arr[j++];
            else serejaSum += arr[k--];
        }
        else
        {
            if(arr[j]>arr[k]) dimaSum += arr[j++];
            else dimaSum += arr[k--];
        }
    }
    cout << serejaSum << " " << dimaSum << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    gameCalculation(n, n - 1, arr);

    return 0;
}
