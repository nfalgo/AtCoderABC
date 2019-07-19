#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> x(3);
  cin >> x[0] >> x[1] >> x[2];

  sort(x.begin(),x.end(),greater<int>());

  cout << (x[0]*10+x[1] + x[2]) << endl;

  return 0;
}
