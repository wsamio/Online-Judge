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
  for(int &i: a) cin >> i;
  for(int i = 0; i <= n; i++) {
    int cnt = 0;
    for(int j = 0; j < n; j++) {
      if(a[j] > i) cnt++;
    }
    if(cnt == i) {
      cout << i << '\n';
      return;
    }
  }
  cout << "-1\n";
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