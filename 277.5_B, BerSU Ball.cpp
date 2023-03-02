#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m; 
  cin >> n;

  multiset<int> a;
  for (int i = 0; i < n; i++) {
    int x; 
    cin >> x;
    a.insert(x);
  }

  int ans = 0;

  vector<int> b;
  cin >> m;
  while (m--) 
  {
    int x; 
    cin >> x;
    b.push_back(x);
  }
  
  sort(b.begin(), b.end());

  for (int i : b) 
  {
    ans++;
    if (a.find(i - 1) != a.end())
      a.erase(a.find(i - 1));
      
    else if (a.find(i) != a.end())
      a.erase(a.find(i));
      
    else if (a.find(i + 1) != a.end())
      a.erase(a.find(i + 1));
      
    else
      ans--;
  }
  
  cout << ans << endl;

}
