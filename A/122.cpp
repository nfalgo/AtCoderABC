#include<bits/stdc++.h>
using namespace std;

int main() {
  char b;
  cin >> b;

  char x;
  if (b == 'A') x='T';
  if (b == 'T') x='A';
  if (b == 'C') x='G';
  if (b == 'G') x='C';

  cout << x <<endl;

  return 0;
}
