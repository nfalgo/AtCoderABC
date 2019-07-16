#include<bits/stdc++.h>
using namespace std;

int main() {
  int  A, B;
  cin >> A >> B;

  int x;
  if (A > 12) x = B;
  else if (A > 5) x = B / 2;
  else x = 0;

  cout << x << endl;

  return 0;
}
