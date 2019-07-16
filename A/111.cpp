#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i=0; i<3; i++) {
    if ( (n/(int)pow(10,2-i)) % 10 == 1) cout <<"9";
    else cout << "1";
  }

  return 0;
}
