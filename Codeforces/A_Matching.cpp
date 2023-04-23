#include <bits/stdc++.h>
using namespace std;

void Testcase() {
  string s;
  cin >> s;
  int ans = 1;
  for(int i = 0; i < (int)s.size(); i++) {
    if(s[i] == '?') {
      int t = (i == 0? 9 : 10);
      ans = ans * t;
    }
  }
  cout << (s[0] == '0'? 0 : ans) << '\n';
}

int main(){
  int T;
  cin >> T;
  while(T--) {
    Testcase();
  }
}