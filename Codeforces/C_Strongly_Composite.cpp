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
  long long ans = 0, rest = 0;
  for(auto i : cnt) {
    long long t = i.second / 2ll;
    ans += t;
    rest += 1ll * i.second - t * 2;
  }
  cout << ans + rest / 3 << '\n';
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