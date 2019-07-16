#include <bits/stdc++.h>
using namespace std;

int main () {
  int n, a, b;
  cin >> n >> a >> b;
  
  int x;
  if (a*n > b) x = b;
  else x = a*n;

  cout << x << endl;

  return 0;
}
