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
  bool no = m >= n;
  for(int i = 2; i * i <= n; i++) {
    if(n % i == 0 and (m >= i or m >= n/i)) no = 1;
  }
  cout << (n != 1 and no? "NO\n" : "YES\n");
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