#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, T;
  cin >> A >> B >> T;

  int x=0;
  for(double i=A; i<T+0.5; i+=A) {
    x += B;
  }

  cout << x << endl;

  return 0;
}
