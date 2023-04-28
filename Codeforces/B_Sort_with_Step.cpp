#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

void Testcase() {
  int n, k;
  cin >> n >> k;
  int bad = 0;
  for(int i = 1; i <= n; i++) {
    int x; cin >> x;
    if(abs(x-i)%k != 0) bad++;
  }
  cout << (bad == 0? 0 : (bad == 2? 1 : -1)) << '\n';
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