#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

int cnt;
int a[2000][2000];
int vis[2000][2000];

void dfs(int i, int j, int n, int m) {
  vis[i][j] = 1;
  cnt += a[i][j];
  if(i + 1 < n and a[i + 1][j] != 0 and !vis[i + 1][j]) dfs(i + 1, j, n, m);
  if(i - 1>= 0 and a[i - 1][j] != 0 and !vis[i - 1][j]) dfs(i - 1, j, n, m);
  if(j + 1 < m and a[i][j + 1] != 0 and !vis[i][j + 1]) dfs(i, j + 1, n, m);
  if(j - 1>= 0 and a[i][j - 1] != 0 and !vis[i][j - 1]) dfs(i, j - 1, n, m);
}

void Testcase() {
  int n, m;
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> a[i][j];
      vis[i][j] = 0;
    }
  }
  vector<int> res;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(!vis[i][j] and a[i][j] != 0) {
        cnt = 0;
        dfs(i, j, n, m);
        debug(cnt);
        res.push_back(cnt);
      }
    }
  }
  sort(res.rbegin(), res.rend());
  cout << (res.size() == 0? 0 : res[0]) << '\n';
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