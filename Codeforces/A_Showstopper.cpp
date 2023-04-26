#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

void Testcase() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for(int &i: a) cin >> i;
  for(int &i : b) cin >> i;
  for(int i = 0; i < n; i++) if(a[i] > b[i]) swap(a[i], b[i]);
  cout << (*max_element(a.begin(), a.end()) != a[n - 1] or *max_element(b.begin(), b.end()) != b[n - 1] ? "No" : "Yes") << '\n';
}

int main() {
  int T;
  cin >> T;
  while(T--) {
    Testcase();
  }
}