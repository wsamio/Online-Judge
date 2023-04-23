#include <bits/stdc++.h>
using namespace std;

void Testcase() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for(int& i: a) cin >> i;
  for(int& i: b) cin >> i;
  int mid;
  for(int i = 0; i < n; i++) if(a[i] != b[i]) { mid = i; break; }
  int i, j;
  i = j = mid;
  while(i - 1 >= 0 and b[i - 1] <= b[i]) i--;
  while(j + 1 < n and b[j + 1] >= b[j]) j++;
  cout << ++i << ' ' << ++j << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;
  while(T--) {
    Testcase();
  }
}