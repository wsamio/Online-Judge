#include <bits/stdc++.h>
using namespace std;

void Testcase() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n+1);
  for(int i = 1; i <= n; i++) {
    int x; cin >> x;
    a[i] = ((a[i-1]+x)&1);
  }
  while(q--) {
    int l, r, k;
    cin >> l >> r >> k;
    cout << ((a[n]-a[r]+a[l-1]+(k&1)*(r-l+1))&1? "YES" : "NO") << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int T;
  cin >> T;
  while(T--){
    Testcase();
  }
}