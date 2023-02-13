#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr)
{
    int m = arr.size();
	if (m & 1)
		cout << "-1" << endl;
	else if (m == 0)
		cout << "1" << endl;
	else
		cout << arr[m / 2 - 1] << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--)
    {
        int n, a;
        cin >> n;
        vector<int> arr;

        for(int i = 1; i <= n; i++)
        {
            cin >> a;
            if(a == 2)
                arr.push_back(i);
        }
        solve(arr);
    }

    return 0;
}


