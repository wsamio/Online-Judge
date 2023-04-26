#include "bits/stdc++.h"
using namespace std;

void Testcase() {
  int n;
  char cur;
  string s;
  cin >> n >> cur >> s;
  s += s;
  int d = 0;
  for(int i = 0, j; i < 2*n; i++) if(s[i] == cur) {
      j = i;
      while(i < 2*n and s[i] != 'g') i++;
      d = max(d, i - j);
    }
  cout << d << '\n';
}

int main() {
  int T;
  cin >> T;
  while(T--) {
    Testcase();
  }
}