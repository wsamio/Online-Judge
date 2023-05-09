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
  vector<vector<int>> a(n, vector<int>(n));
  int cnt0, cnt1;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> a[i][j];
      cnt0 += (a[i][j] == 0);
      cnt1 += (a[i][j] == 1);
    }
  }
  cnt0 = n*n - cnt0, cnt1 = n*n - cnt1;
  if((k - cnt0 >= 0 and (k - cnt0)%2==0) or (k - cnt1 >= 0 and (k - cnt1)%2==0)) {
    cout << "YES\n";
    return;
  }
  int cnt = 0, cng = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++) {
      if(a[i][j] != a[n - i - 1][n - j - 1]) cnt++;
      else {
        if(i == n - i - 1 and j == n - j - 1) cng++;
      }
    }
  }
  cnt = k - cnt/2;
  cout << (cnt < 0? "NO\n" : (cnt & 1 and cng < 1? "NO\n" : "YES\n"));
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