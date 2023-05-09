#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

void Testcase() {
  int n, m;
  cin >> n >> m;
  queue<int> q;
  q.push(n);
  while(!q.empty()) {
    if(q.front() == m) {
      cout << "YES\n";
      return;
    }
    if(q.front() >= 3 and q.front() % 3 == 0) {
      q.push(q.front() / 3);
      q.push(q.front() - (q.front() / 3));
    }
    q.pop();
  }
  cout << "NO\n";
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