#include<bits/stdc++.h>
using namespace std;

int main() {
  int k;
  cin >> k;

  if (k%2 == 1) cout << (k/2 + 1) * (k-1) / 2 << endl;
  else cout << k*k/4 << endl;

  return 0;
}
