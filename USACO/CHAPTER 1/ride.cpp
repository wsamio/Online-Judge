/*
ID: samio.c1
TASK: ride
LANG: C++14
*/

#include<bits/stdc++.h>

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

using namespace std;

int main(){

  ofstream fout ("ride.out");
  ifstream fin ("ride.in");

  string s, t;
  fin >> s >> t;
  int d = 1;
  for(int i = 0; i < (int)s.size(); i++) 
    d = (d * (s[i] - 'A' + 1)) % 47;
  int e = 1;
  for(int i = 0; i < (int)t.size(); i++) 
    e = (e * (t[i] - 'A' + 1)) % 47;
  fout << (d == e? "GO" : "STAY") << '\n';
}