#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

void Testcase() {
  int c, a, b;
  cin >> c >> a >> b;
  int res = 0;
  for(int i = 1; i <= c; i++) {
    int x; cin >> x;
    if(x == a + b and res == 0) {
      res = i;
    }
  }
  cout << res << '\n';
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