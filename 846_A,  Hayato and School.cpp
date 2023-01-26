#include<bits/stdc++.h>
using namespace std;

const int MAX = 300;
int arr[MAX + 5];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--)
    {
        int n;
        cin >> n;

        vector<int> evenNum, oddNum;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            (arr[i] % 2 != 0) ? oddNum.push_back(i + 1) : evenNum.push_back(i + 1);
        }

        int totalEven = evenNum.size();
        int totalOdd = oddNum.size();

        if((totalEven > 1 && totalOdd > 0) || totalOdd > 2)
        {
            cout << "YES" << endl;

            if((totalEven > 1 && totalOdd > 0))
                cout << evenNum[0] << " " << evenNum[1] << " " << oddNum[0] << endl;
            else
                cout << oddNum[0] << " " << oddNum[1] << " " << oddNum[2] << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
