#include <bits/stdc++.h>
using namespace std;

#define ll long long

void Testcase() {
  ll n, c, d;
  cin >> n >> c >> d;
  ll cost = 0;
  set<ll> st;
  for(int i = 0; i < n; i++) {
    int x; cin >> x;
    if(st.find(x) != st.end()) {
      cost += c;
    }
    st.insert(x);
  }
  vector<ll> a;
  for(auto x : st) {
    a.push_back(x);
  }
  n = a.size();
  ll ans = n * c + d, _cost = 0;
  for(int i = 0; i < n; i++) {
    if(i == 0) {
      if(a[i] != 1)
        _cost = (a[i] - 1) * d;
    } else {
      _cost += (a[i] - a[i - 1] - 1) * d;
    }
    ans = min(ans, _cost + (n - i - 1) * c );
  }
  cout << ans + cost << endl;
}

int main(){
  int T;
  cin >> T;
  while(T--) {
    Testcase();
  }
}