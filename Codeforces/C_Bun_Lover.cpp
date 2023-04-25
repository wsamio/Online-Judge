#include <bits/stdc++.h>
using namespace std;

void Testcase() {
  long long n;
  cin >> n;
  cout << n * 4 + (n - 2) * (n - 1) - 9 + (n - 1) + 10 << endl;
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