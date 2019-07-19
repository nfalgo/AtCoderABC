#include<bits/stdc++.h>
using namespace std;

int main() {
  int A,B;
  cin >> A >> B;

  vector<int> x(3);
  x[0] = A+B;
  x[1] = A-B;
  x[2] = A*B;
  sort(x.begin(),x.end(),greater<int>());

  cout << x[0];

  return 0;
}
