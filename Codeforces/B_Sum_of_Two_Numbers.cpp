#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
  #include "debug.h"
#endif

int dig(int n) {
  int cnt = 0;
  while(n > 0) {
    cnt += (n % 10);
    n /= 10;
  }
  return cnt;
}

void Testcase() {
  int n;
  cin >> n;
  if(n == 1) {
    cout << "1 0\n";
    return;
  }
  int l = 1, h = n - 1;
  while(l <= h) {
    int x = (l + h) / 2;
    int y = n - x;
    if(abs(dig(x) - dig(y)) <= 1) {
      cout << x << ' ' << y << '\n';
      return;
    } else if(dig(x) > dig(y)) {
      h = x;
    } else {
      l = x;
    }
  }
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