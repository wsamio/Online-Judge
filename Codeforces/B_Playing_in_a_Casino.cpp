#include <bits/stdc++.h>
using namespace std;

#define ll long long

void Testcase() {
  int n, m;
  cin >> n >> m;
  vector<vector<ll>> a(m, vector<ll> (n + 1, 0));
  for(int j = 1; j <= n; j++) {
    for(int i = 0; i < m; i++) {
      cin >> a[i][j];
    }
  }
  ll ans = 0;
  for(int i = 0; i < m; i++) {
    sort(a[i].begin(), a[i].end());
    for(int j = 1; j <= n; j++) {
      a[i][j] += a[i][j - 1];
    }
    for(int j = 1; j <= n; j++) {
      ans += a[i][n] - a[i][j - 1] - (a[i][j] - a[i][j - 1]) * (n - j + 1);
    }
  }
  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;
  while(T--){
    Testcase();
  }
}