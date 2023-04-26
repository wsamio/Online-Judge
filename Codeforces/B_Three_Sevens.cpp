#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

void Testcase() {
  int m;
  cin >> m;
  vector<int> a[m];
  for(int i = 0; i < m; i++) {
    int n;
    cin >> n; a[i].resize(n);
    for(int &i : a[i]) cin >> i;
  }
  vector<int> res(m);
  set<int> have;
  for(int i = m - 1; i >= 0; i--) {
    bool bad = 1;
    for(int j = 0; j < (int)a[i].size(); j++) {
      if(have.find(a[i][j]) == have.end()) {
       res[i] = a[i][j];
       bad = 0;
      }
      have.insert(a[i][j]);
    }
    if(bad) { cout << -1 << '\n'; return; }
  }
  for(int i : res) cout << i << ' ';
  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;
  while(T--) {
    Testcase();
  }
}