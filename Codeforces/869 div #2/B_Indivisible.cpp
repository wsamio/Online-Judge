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
  if(n == 1) {
    cout << "1\n"; return;
  }
  if(n&1) {
    cout << "-1\n"; return;
  }
  for(int i = n, f = 1; i > 1 ; i -= 2) {
    cout << i - 1 << ' ' << i << ' ';
  }
  cout << '\n';
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