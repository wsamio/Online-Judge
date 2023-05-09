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
  vector<long long> t[3];
  for(int i = 0; i < n; i++) {
    long long x; cin >> x;
    string s; cin >> s;
    if(s == "01") t[0].push_back(x);
    else if(s == "10") t[1].push_back(x);
    else if(s == "11") t[2].push_back(x);
  }
  for(int i = 0; i < 3; i++) {
    sort(t[i].begin(), t[i].end());
    debug(t[i]);
  }
  long long res = 6e10;
  if(t[0].size() > 0 and t[1].size() > 0) {
    res = min(res, t[0][0] + t[1][0]);
  }
  if(t[2].size() > 0) {
    res = min(res, t[2][0]);
  }
  cout << (res == 6e10? -1 : res) << '\n';
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