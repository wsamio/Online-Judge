#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

void Testcase() {
  string s;
  cin >> s;
  string t = "codeforces";
  int cnt = 0;
  for(int i = 0; i < 10; i++) {
  	cnt += (s[i] != t[i]);
  }
  cout << cnt << '\n';
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