#include <bits/stdc++.h>
using namespace std;

#define ll long long

void Testcase() {
  int n;
  cin >> n;
  priority_queue<ll> bonus;
  ll power = 0;
  while(n--) {
    ll x; cin >> x;
    if(x == 0 and !bonus.empty()) {
      power += bonus.top();
      bonus.pop();
    } else bonus.push(x);
  }
  cout << power << '\n';
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
