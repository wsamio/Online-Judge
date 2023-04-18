#include <bits/stdc++.h>
using namespace std;

void Testcase() {
  long long n;
  cin >> n;
  cout << ((n&(n-1)) == 0? "NO" : "YES") << '\n';
}

int main(){
  int T;
  cin >> T;
  while(T--) {
    Testcase();
  }
}