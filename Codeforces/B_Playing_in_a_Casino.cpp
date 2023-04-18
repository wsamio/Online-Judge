#include <bits/stdc++.h>
using namespace std;

#define ll long long

void Testcase() {
  int n, m;
  cin >> n >> m;
  vector<vector<ll>> a(n + 1, vector<ll> (m));
  for(int i = 1; i <= n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  ll ans = 0;
  for(int j = 0; j < m; j++) {
    vector<ll> tmp(n + 1);
    for(int i = 1; i <= n; i++) {
      tmp[i] = a[i][j];
    }
    sort(tmp.begin(), tmp.end());
    for(int i = 1; i <= n; i++) {
      tmp[i] += tmp[i - 1];
    }
    for(int i = 1; i <= n; i++) {
      ans += (tmp[n] - tmp[i - 1]) - (tmp[i] - tmp[i - 1]) * (n + 1 - i);
    }
  }
  cout << ans << '\n';
}

int main() {
  int T;
  cin >> T;
  while(T--){
    Testcase();
  }
}