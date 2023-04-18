#include <bits/stdc++.h>
using namespace std;

void Testcase() {
  int n, k, d, w;
  cin >> n >> k >> d >> w;
  vector<int> a(n);
  for(auto& i : a) {
    cin >> i;
  }
  int i = 0, cnt = 0;
  while(i < n) {
    int use = min((int)(upper_bound(a.begin() + i, a.end(), a[i] + w + d) - a.begin()) - i, k);
    i += use;
    cnt++;
  }
  cout << cnt << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;
  while(T--) {
    Testcase();
  }
}