#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

void Testcase() {
  int n;
  cin >> n;
  map<int, int> cnt;
  while(n--) {
    int x; cin >> x;
    for(int i = 2; i * i <= x; i++) {
      while(x % i == 0) {
        x /= i;
        cnt[i]++;
      }
    }
    if(x > 1) cnt[x]++;
  }
  int ans = 0, res = 0;
  for(auto [i, j]: cnt) {
    ans += j / 2;
    res += j % 2;
  }
  ans += res/3;
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