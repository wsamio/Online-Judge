#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

void Testcase() {
  int n, m;
  cin >> n >> m;
  vector<int> e[n];
  while(m--) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    e[u].push_back(v), e[v].push_back(u);
  }
  int x, y;
  for(int i = 0; i < n; i++) {
    if(e[i].size() == 1) {
      int parent = e[i][0];
      y = e[parent].size() - 1;
      for(int j = 0; j <= y; j++) {
        int parent_ = e[parent][j];
        if(e[parent_].size() != 1) {
          x = e[parent_].size();
          break;
        }
      }
      break;
    }
  }
  cout << x << ' ' << y << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int T = 1;
  cin >> T;
  while(T--) {
    Testcase();
  }
}