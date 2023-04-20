#include <bits/stdc++.h>
using namespace std;

int findMex(vector<int> a) {
  int n = a.size();
  set<int> s;
  for(int i = 0; i <= n; i++) s.insert(i);
  for(int i = 0; i < n; i++) {
    if(s.find(a[i]) != s.end()) s.erase(a[i]);
  }
  return *s.begin();
}

void Testcase() {
  int n;
  cin >> n;
  vector<int> a(n);
  set<int> s;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int Mex = findMex(a);
  if(count(a.begin(), a.end(), Mex + 1) > 1) {
    int f = -1, l = -1;
    for(int i = 0; i < n; i++) {
      if(a[i] == Mex + 1) {
        if(f == -1) f = i;
        l = i;
      }
    }
    vector<int> t;
    for(int i = 0; i < n; i++) {
      if(i < f or i > l) t.push_back(a[i]);
    }
    cout << (findMex(t) == Mex? "Yes" : "No") << '\n';
  } else {
    cout << (Mex == n? "No" : "Yes") << '\n';
  }
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