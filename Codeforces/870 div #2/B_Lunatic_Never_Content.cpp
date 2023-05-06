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
  vector<int> a(n);
  for(int &i : a) cin >> i;
  int g = abs(a[0] - a[n - 1]);
  for(int i = 1; i < n/2; i++) {
    g = __gcd(g, abs(a[i] - a[n - i - 1]));
  }
  cout << g << '\n';
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