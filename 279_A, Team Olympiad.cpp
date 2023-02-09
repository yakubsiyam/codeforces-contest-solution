#include<bits/stdc++.h>
using namespace std;

const int MAX = 5000;
int arr[MAX + 5];

//int solve(int arr[])
//{
//    if(n == 1) return 2;
//    return (n + 2) / 3;
//}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, w;
    vector<int> PR, Math, PE;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 1) PR.push_back(i);
        else if(arr[i] == 2) Math.push_back(i);
        else PE.push_back(i);
    }

    int PrCnt = PR.size();
    int MathCnt = Math.size();
    int PeCnt = PE.size();

    if(PrCnt == 0 || MathCnt == 0 || PeCnt == 0)
        cout << 0 << endl;
    else
    {
        if(PrCnt <= MathCnt && PrCnt <= PeCnt)
            w = PrCnt;
        else if(MathCnt <= PrCnt && MathCnt <= PeCnt)
            w = MathCnt;
        else
            w = PeCnt;
        cout << w << endl;

        for(int i = 0; i < w; i++)
            cout << PR[i] << " " << Math[i] << " " << PE[i] << endl;
    }

    return 0;
}

