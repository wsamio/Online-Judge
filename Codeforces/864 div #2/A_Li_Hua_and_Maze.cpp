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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int cnt1 = (a - 1 >= 1) + (a + 1 <= n) + (b - 1 >= 1) + (b + 1 <= m);
  int cnt2 = (c - 1 >= 1) + (c + 1 <= n) + (d - 1 >= 1) + (d + 1 <= m);
  cout << min(cnt1, cnt2) << '\n';
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