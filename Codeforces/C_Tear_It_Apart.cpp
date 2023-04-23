#include <bits/stdc++.h>
using namespace std;

int setBit(int n) {
  int i = 0;
  while(n > 0) n >>= 1, i++;
  return i;
}

void Testcase() {
  string s;
  cin >> s;
  int n = (int)s.size();
  vector<int> cnt[26];
  int ans = n;
  for(int i = 0; i < 26; i++) {
    cnt[i].push_back(-1), cnt[i].push_back(n);
    for(int j = 0; j < n; j++) {
      if(s[j] == i + 'a') {
        cnt[i].push_back(j);
      }
    }
    sort(cnt[i].begin(), cnt[i].end());
    int d = 0;
    for(int j = 0; j + 1 < cnt[i].size(); j++) {
      d = max(d, cnt[i][j + 1] - cnt[i][j]);
    }
    ans = min(ans, d - 1);
  }
  cout << setBit(ans) << '\n';
}

int main() {
  int T;
  cin >> T;
  while(T--) {
    Testcase();
  }
}