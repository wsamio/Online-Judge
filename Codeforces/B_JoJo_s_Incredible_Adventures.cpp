#include <bits/stdc++.h>
using namespace std;

void Testcase() {
  string s;
  cin >> s;
  long long len = s.size();
  if(count(s.begin(), s.end(), '1') == len) {
    cout << len * len << '\n';
    return;
  }
  s += s;
  long long cnt = 0, t = 0;
  for(int i = 0; i < len * 2; i++) {
    if(s[i] == '1') t++;
    else cnt = max(cnt, t), t = 0;
  }
  cnt = max(cnt, t);
  cout << (cnt / 2 + 1) * ((cnt + 1) / 2) << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;
  while(T--){
    Testcase();
  }
}