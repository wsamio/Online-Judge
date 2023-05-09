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
  int res = 0, cnt = 0;
  for(int i = 0; i < n; i++) {
    int x; cin >> x;
    if(x == 0) {
      cnt++;
      res = max(res, cnt);
    } else cnt = 0;
  }
  cout << res << '\n';
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