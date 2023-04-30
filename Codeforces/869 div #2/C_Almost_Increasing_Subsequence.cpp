#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

void Testcase() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for(int &i : a) cin >> i;
  vector<int> res;
  for(int i = 0; i + 2 < n; i++) {
    if(!(a[i] >= a[i + 1] and a[i + 1] >= a[i + 2])) res.push_back(i+1);
  }
  while(q--) {
    int l, r;
    cin >> l >> r;
    int cnt = upper_bound(res.begin(),res.end(), r) - lower_bound(res.begin(), res.end(), l);
    for(int i = 0; i < 2; i++) {
      if(r - i >= l) {
        if( !(binary_search(res.begin(), res.end(), r - i)) ) cnt++;
      }
    }
    cout << cnt << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  Testcase();
}