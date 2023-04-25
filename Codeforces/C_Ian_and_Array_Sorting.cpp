#include <bits/stdc++.h>
using namespace std;

void Testcase() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(int& i : a) cin >> i;
  string _[2]= {"1", "101"}, t = "";
  for(int i = 0; i + 1 < n; i++) {
    if(a[i] > a[i + 1]) {
      t += '1';
    } else t += '0';
  }
  cout << (t == _[0] or t == _[1]? "NO" : "YES") << '\n';
}

int main() {
  int T;
  cin >> T;
  while(T--) {
    Testcase();
  }
}