#include "bits/stdc++.h"
using namespace std;

void Testcase() {
  int n;
  cin >> n;
  if(n == 1) {
    cout << "1\n"; return;
  }
  if(n&1) {
    cout << "-1\n"; return;
  }
  vector<int> a(n+1);
  for(int i = 0; i < n; i++) {
    if(i&1) cout << i;
    else cout << n - i;
    cout << (i == n - 1 ? '\n' : ' ');
  }
}

int main() {
  int T;
  cin >> T;
  while(T--) {
    Testcase();
  }
}