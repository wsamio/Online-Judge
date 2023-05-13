#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
  #include "debug.h"
#endif

void Testcase() {
  int n, k;
  cin >> n >> k;
  vector<long long> a(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  for(int i = 1; i <= n; i++){
    a[i] += a[i - 1];
  }
  long long res = 0;
  for(int i = 1; k >= (i/2) ;i += 2) {
    int l = i, r = n - k + i/2;
    res = max(res, a[r] - a[l - 1]);
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