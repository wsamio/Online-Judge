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
  string s[n];
  for(auto &i : s) cin >> i;
  set<int> have;
  have.insert(0);
  for(int j = 0; j < k ; j++) {
    if(j == 0) {
      for(int i = 1; i < n; i++) {
        if(s[i][j] == s[0][j]) have.insert(i);
      }
    } else {
      for(int i = 1; i < n; i++) {
        if(have.find(i) != have.end() and s[i][j] != s[0][j]) {
          have.erase(i);
        }
      }
    }
  }
  cout << (int)have.size()<< '\n';
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