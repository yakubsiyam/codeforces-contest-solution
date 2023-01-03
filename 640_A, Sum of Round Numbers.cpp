#include<bits/stdc++.h>
using namespace std;

int main()
{
//    ios::sync_with_stdio(false);
//    cin.tie(0);

    int T;
    cin >> T;

    while(T--)
    {
        int n;
        cin >> n;
        vector<int> a;
        int p = 1;
        while (n > 0)
        {
            if (n % 10 != 0)
                a.push_back((n % 10) * p);
            p *= 10;
            n = n/10;
        }
        cout << a.size() << "\n";

        for(auto v : a)
        {
            cout << v << " ";
        }
//        for (int i = 0; i < x.size(); i++)
//            cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}

