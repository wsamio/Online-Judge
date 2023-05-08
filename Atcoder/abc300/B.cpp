#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

bool check (int h, int w, int n, int m, vector<vector<char>> p, vector<vector<char>> q) {
  auto x = p;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      x[i][(j + h) % m] = p[i][j];
    }
  }
  p = x;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      x[(i + w) % n][j] = p[i][j];
    }
  }
  return x == q;
}

void Testcase() {
  int n, m;
  cin >> n >> m;
  vector<vector<char>> a(n, vector<char>(m));
  auto b = a;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> b[i][j];
    }
  }
  bool yes = 0;
  for(int i = 0; i < 30; i++) {
    for(int j = 0; j < 30; j++) {
      auto p = a, q = b;
      yes |= check(i, j, n, m, p, q);
      yes |= check(j, i, n, m, p, q);
    }
  }
  cout << (yes? "Yes\n" : "No\n");
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int T = 1;
  //cin >> T;
  while(T--) {
    Testcase();
  }
}