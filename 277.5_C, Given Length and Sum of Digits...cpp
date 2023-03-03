#include <bits/stdc++.h>
using namespace std;

#define ll long long
p
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int m, s; 
  cin >> m >> s;

  if (m == 1)
    {
        (s > 9) ? cout << "-1 -1\n" : cout << s << " " << s << "\n";
    }
  else 
    {
        if (s < 1 || 9 * m < s) {
          cout << "-1 -1\n";
          return 0;
    }

    vector<int> a1(m);
    vector<int> a2(m);

    int temp = s;
    for (int i = 0; i < m; i++) {
      int tt = min(9 - a1[i], temp);
      a1[i] += tt;
      temp -= tt;
    }

    temp = s - 1; a2[0] = 1;
    for (int i = m - 1; i >= 0; i--) {
      int tt = min(9 - a2[i], temp);
      a2[i] += tt;
      temp -= tt;
    }

    for (int i : a2)
      cout << i;
    cout << " ";
    for (int i : a1)
      cout << i;
    cout << "\n";

  }
  
}
