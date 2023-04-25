#include <bits/stdc++.h>
using namespace std;

void Testcase() {
  int n, t;
  cin >> n >> t;
  vector<int> a(n), b(n);
  for(auto& i : a) cin >> i;
  for(auto& i : b) cin >> i;
  int ent = 0, ans = -1;
  for(int i = 0; i < n; i++) {
    if(b[i] > ent and a[i] + i <= t) {
      ent = b[i];
      ans = i + 1;
    }
  }
  cout << ans << '\n';
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