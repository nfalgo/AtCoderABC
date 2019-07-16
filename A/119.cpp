#include <bits/stdc++.h>
using namespace std;

int ctoi(const char c){
  if('0' <= c && c <= '9') return (c-'0');
  return -1;
}

int main () {
  string S;
  cin >> S;

  int Y=0,M=0,D=0;
  for (int i=0; i<S.size(); i++) {
    if(i == 4 || i == 7) {

    } else if(i <= 3) {
      Y += ctoi(S[i]) * (int)pow(10,3-i);
    } else if (i <= 6) {
      M += ctoi(S[i]) * (int)pow(10,1-(i-5));
    } else {
      D += ctoi(S[i]) * (int)pow(10,1-(i-7));
    }
  }
  bool flag = false;
  if (Y < 2019) {
    flag = true;
  }
  else if (Y == 2019) {
    if (M < 4) {
      flag = true;
    }
    else if(M == 4){
      if (D <= 30) {
        flag = true;
      }

    }

  }

  if (flag) cout << "Heisei";
  else cout << "TBD";

  return 0;
}
