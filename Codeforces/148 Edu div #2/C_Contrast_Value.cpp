#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
  #include "debug.h"
#endif

void Testcase() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(int &i : a) cin >> i;
  a.resize(unique(a.begin(), a.end()) - a.begin());
  n = (int) a.size();
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    cnt += (i == 0 or i == n - 1 or (a[i - 1] > a[i]) == (a[i] < a[i + 1]));
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