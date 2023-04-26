#include <bits/stdc++.h>
using namespace std;

void Testcase() {
  int n;
  cin >> n;
  vector<long long> a(n);
  for(auto& i : a) cin >> i;
  sort(a.begin(), a.end());
  cout << max(a[0] * a[1], a[n - 1] * a[n - 2]) << endl;
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
