#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

void Testcase() {
  int n, m, n_;
  cin >> n >> m;
  n_ = n * m;
  vector<long long> a(n*m);
  for(auto &i : a) cin >> i;
  sort(a.begin(), a.end());
	if(n < m) swap(n, m);
	int p = (n_ - m) * (a[n_ - 1] - a[0]) + (m - 1) * (a[n_ - 1] - a[1]);
	int q = (n_ - m) * (a[n_ - 1] - a[0]) + (m - 1) * (a[n_ - 2] - a[0]);
	cout << max(p, q) << '\n';
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