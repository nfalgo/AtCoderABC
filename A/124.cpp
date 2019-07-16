#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  int x;
  x = max(A,B);
  if(x == A) x += max(A-1,B);
  else x += max(A,B-1);

  cout << x << endl;

  return 0;
}
