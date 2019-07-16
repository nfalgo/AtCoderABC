#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  string S;
  cin >> N >> K >> S;

  int diff = 'a' - 'A';
  S[K-1] += diff;

  for(int i=0; i<N; i++) cout << S[i];


  return 0;
}
