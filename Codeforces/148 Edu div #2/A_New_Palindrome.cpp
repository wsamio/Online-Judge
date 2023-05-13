#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
  #include "debug.h"
#endif

void Testcase() {
  string s; 
  cin >> s;
  map<char, int> cnt;
  for(int i = 0; i < (int)s.size(); i++) {
    cnt[s[i]]++;
  }
  int ok = 0;
  for(auto [i, j] : cnt) {
    if(j >= 2) ok++;
  }
  cout << (ok >= 2? "YES\n" : "NO\n");
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