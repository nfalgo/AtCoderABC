#include<bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int count =0;
  for(int i=0; i<S.size(); i++) {
    if (S[i] == '+') count++;
    else count--;
  }

  cout << count;
  
  return 0;
}
