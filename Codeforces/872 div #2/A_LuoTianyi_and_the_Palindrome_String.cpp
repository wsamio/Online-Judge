#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

void Testcase() {
  string s; 
  cin >> s;
  int n = (int)s.size();
  int pal = 1;
  int i = 0;
  while(i < n - i - 1) {
  	if(s[i] != s[n - i - 1]) {
  		pal = 0;
  	}
  	i++;
  }
  sort(s.begin(), s.end());
  cout << (s[0] == s[n - 1] ? - 1 : (pal? n - 1 : n)) << '\n';
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