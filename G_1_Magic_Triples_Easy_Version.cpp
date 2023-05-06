#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

long long nP3(int n) {
  long long res = 1, i = 3;
  while(i--) {
    res *= 1ll * n--;
  }
  return res;
}

void Testcase() {
  int n;
  cin >> n;
  map<int, int> cnt;
  for(int i = 0; i < n; i++) {
    int x; cin >> x;
    cnt[x]++;
  }
  vector<int> unq;
  for(auto i : cnt) unq.push_back(i.first);
  long long res = 0;
  for(int i = 0; i < (int)unq.size(); i++) {
    int x = unq[i];
    for(int j = 1; j * j <= x; j++) {
      if(x % j == 0) {
        int t = sqrt(j);
        if(t * t == j and t != 1) {
          res += 1ll * cnt[x] * cnt[x / t] * cnt[x / j];
        }
        if(x / j != j) {
          t = sqrt(x / j);
          if(t * t == x / j) {
            res += 1ll * cnt[x] * cnt[x / t] * cnt[x / (x / j)];
          }
        }
      }
    }
    res += nP3(cnt[x]);
  }
  cout << res << '\n';
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