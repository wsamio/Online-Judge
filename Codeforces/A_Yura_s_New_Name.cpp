#include <bits/stdc++.h>
using namespace std;

void Testcase() {
  string s; 
  cin >> s;
  int len = (int)s.size();
  int cnt = (s[0] == '_'? 1 : 0);
  for(int i = 0; i < len; i++) {
    if(s[i] == '_' and (i + 1 >= len or s[i + 1] != '^'))
      cnt++;
  }
  if(len == 1 and s[0] == '^') cnt = 1;
  cout << cnt << '\n';
}

int main() {
  int T;
  cin >> T;
  while(T--){
    Testcase();
  }
}