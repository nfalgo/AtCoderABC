#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  vector<int> count(4);
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (j==i) continue;
      if (S[i] == S[j]) count[i]++;
    }
  }
  if (count[0]*count[1]*count[2]*count[3] == 1) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
